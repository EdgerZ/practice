//#include <iostream>
//#include <cstring>
//#include <string.h>
//#include <cmath>
//#include <ctime>
//using namespace std;
//
//void printArray(void* pArray, int elesize, int len, void(*anyPrint)(void*))
//{
//	char*p = (char*)pArray;
//	for (int i = 0; i < len; i++)
//	{
//		char*  eleAddr = p + elesize * i;
//		anyPrint(eleAddr);
//	}
//}
//
//void myPrintInt(void *data)
//{
//	int *num = (int*)data;
//	cout << (*num) << endl;
//}
//
//int main()
//{
//	int a[20] = { 1,2,3,4,5,6,7,8,9,0,11,12,13,14,15,16,17,18,19,20 };
//	int len = sizeof(a) / sizeof(int);
//	printArray(a, sizeof(int), len, myPrintInt);
//
//	system("pause");
//	return 0;
//}