//#include <iostream>
//#include <cstring>
//#include <string.h>
//#include <cmath>
//#include <ctime>
//using namespace std;
//
//
//void sortByFunc(void* parry, int elesize, int elenum, int(*myCompare)(void*, void*), void(*myPrint)(void*))
//{
//	char* p = (char*)parry;
//	int maxNum = 0;
//	int temp = 0;
//	void* mem1 = malloc(elesize);
//	void* mem2 = malloc(elesize);
//	int ret = 0;
//	for (int i = 0; i < elenum; i++)
//	{
//		maxNum = i;
//		temp = i;
//		for (int j = i+1; j < elenum; j++)
//		{
//			memcpy(mem1, p + temp * elesize, elesize);
//			memcpy(mem2, p + j * elesize, elesize);
//			ret = myCompare(mem1, mem2);
//			if (ret == 0)
//			{
//				temp = j;
//			}
//		}
//		if (maxNum != temp)
//		{
//			void *tempS = malloc(elesize+1);
//			memset(tempS, 0x00, sizeof(tempS));
//			memcpy(tempS, p + maxNum * elesize, elesize);
//			memcpy(p + maxNum * elesize, p + temp * elesize, elesize);
//			memcpy(p + temp * elesize, tempS, elesize);
//			free(tempS);
//		}
//	}
//
//	for (int i = 0; i < elenum; i++)
//	{
//		myPrint(p + i * elesize);
//	}
//
//	free(mem1);
//	free(mem2);
//}
//
//int myCompareInt(void* p1, void* p2)
//{
//	int *a = (int *)p1;
//	int *b = (int *)p2;
//	if (*a > *b)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//void myPrintInt(void* p)
//{
//	int* a = (int *)p;
//	cout << *a << endl;
//}
//
//int main()
//{
//	//创建动态数组
//
//
//	int a[10] = { 1,3,5,7,9,0,8,6,4,2 };
//	int len = sizeof(int);
//	int size = sizeof(a) / len;
//	sortByFunc(a, len, size, myCompareInt, myPrintInt);
//
//
//	system("pause");
//	return 0;
//}