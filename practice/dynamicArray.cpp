//#define _CRT_SECURE_NO_WARNINGS
//#define debugFlag 0
//#include <iostream>
//#include <cstring>
//#include <string.h>
//
//using namespace std;
//
//
//class Person
//{
//public:
//	char name[64] = "";
//	int age = 0;
//	int score = 0;
//};
//
//class dynamicArray
//{
//public:
//	void** m_array;
//	int m_size;
//	int m_capacity;
//};
//
//void initDynamicArray(dynamicArray** array, int capacity)
//{
//	*array = (dynamicArray*)malloc(sizeof(dynamicArray));
//	(*array)->m_size = 0;
//	(*array)->m_capacity = capacity;
//	(*array)->m_array = (void**)malloc(sizeof(void*)*capacity);
//	memset((*array)->m_array, 0x00, sizeof(void*)*capacity);
//
//	cout << "动态数组初始化完成!" << endl;
//}
//
////重新初始化动态数组的大小
//void reInitDynamicArray(dynamicArray* array, int pos)
//{
//	array->m_capacity = pos + 4;
//	array->m_array = (void**)realloc(array->m_array, sizeof(void*)*(pos + 4));
//	memset(array->m_array, 0x00, sizeof(void*)*(pos + 4));
//
//}
//
//void insertDataToDArray(void* Data, int pos, dynamicArray* array)
//{
//	//先判断要插入的位置是否超过了动态数组的范围
//	if (pos >= array->m_capacity)
//	{
//		reInitDynamicArray(array, pos);
//	}
//
//	//先判断要插入的位置是否为空
//#if debugFlag
//	printf("array->m_array = [%p], tempPtr2 = [%p]\n", array->m_array, array->m_array+pos);
//#endif
//	void *tempPtr2 = array->m_array+pos;
//
//	if (*(int*)tempPtr2 == NULL)
//	{
//		cout << "该位置当前为空，可以插入！" << endl;
//		*(int**)tempPtr2 = (int*)Data;
//		//void* ret = memcpy(&tempPtr2, &Data, sizeof(void*));
//#if debugFlag
//		printf("调试数据:[%s]_[%d]_[%d]\n", ((Person*)*(int*)tempPtr2)->name, ((Person*)*(int*)tempPtr2)->age, ((Person*)*(int*)tempPtr2)->score);
//#endif
//		cout << "插入成功！" << endl;
//		array->m_size++;
//	}
//	else
//	{
//		cout << "该位置当前已有数据存在，插入失败！" << endl;
//		return;
//	}
//}
//
////删除指定位置的数据
//void deleteByPos(dynamicArray* array, int pos)
//{
//	if (array == NULL)
//	{
//		cout << "动态数组初始化失败!" << endl;
//	}
//	void* tempPtr = array->m_array+pos;
//	if (*(int **)tempPtr == NULL)
//	{
//		cout << "当前位置没有数据，删除失败!" << endl;
//		return;
//	}
//	else
//	{
//		free(*(int **)tempPtr);
//		cout << "数据释放成功！" << endl;
//		*(int **)tempPtr = NULL;
//		cout << "当前位置数据指针置空！" << endl;
//	}
//}
//
////遍历打印所有有数据的节点并注明节点位置
//void showData(dynamicArray* array)
//{
//	void* tempPtr = NULL;
//	int flag = 0;
//	for (int i = 0; i < array->m_capacity; i++)
//	{
//		tempPtr = array->m_array + i;
//		if (*(int **)tempPtr == NULL)
//		{
//			continue;
//		}
//		else
//		{
//			cout << "当前位置：第 " << i << " 个" << endl;
//			printf("姓名：\n\t%s\n年龄：\n\t%d\n分数：\n\t%d\n", ((Person*)*(int*)tempPtr)->name, ((Person*)*(int*)tempPtr)->age, ((Person*)*(int*)tempPtr)->score);
//			flag = 1;
//		}
//	}
//	if (flag == 0)
//	{
//		cout << "当前动态数组中没有任何数据！" << endl;
//	}
//}
//
////释放整个动态数组结构体
//void freeAll(dynamicArray* array)
//{
//	void* tempPtr = NULL;
//	for (int i = 0; i < array->m_capacity; i++)
//	{
//		tempPtr = array->m_array + i;
//		if (*(int **)tempPtr == NULL)
//		{
//			continue;
//		}
//		else
//		{
//			//释放动态数组存储的数据
//			free(*(int **)tempPtr);
//			*(int **)tempPtr = NULL;
//			cout << "释放了第 " << i << " 个数据" << endl;
//		}
//	}
//	cout << "所有元素中的数据已经被释放！开始释放动态数组" << endl;
//	free(array->m_array);
//	array->m_array = NULL;
//	cout << "动态数组释放成功!开始释放管理节点" << endl;
//	free(array);
//	cout << "管理节点释放成功！" << endl;
//	array = NULL;
//}
//
//int main()
//{
//	//创建动态数组
//	dynamicArray *dArray = NULL;
//	initDynamicArray(&dArray, 20);
//
//#if debugFlag
//	printf("创建的动态数组地址为：%p\n", dArray);
//#endif
//
//	//创建需要动态数组存放的数据
//	Person *p[10];
//	for (int i = 0; i < 10; i++)
//	{
//		p[i] = (Person *)malloc(sizeof(Person));
//		strcpy(p[i]->name, "张三");
//		sprintf(p[i]->name, "%s%03d", p[i]->name, i);
//		p[i]->age = 10+i;
//		p[i]->score = 90+i;
//	}
//	
//	//实现向动态数组内插入数据
//	insertDataToDArray(p[3], 25, dArray);
//	cout << "动态数组当前容量为：" << dArray->m_capacity << endl;
//	showData(dArray);
//	insertDataToDArray(p[4], 4, dArray);
//	insertDataToDArray(p[5], 5, dArray);
//	insertDataToDArray(p[6], 6, dArray);
//	insertDataToDArray(p[7], 7, dArray);
//	insertDataToDArray(p[8], 8, dArray);
//	insertDataToDArray(p[9], 9, dArray);
//	insertDataToDArray(p[0], 0, dArray);
//	showData(dArray);
//	deleteByPos(dArray, 3);
//	deleteByPos(dArray, 3);
//	showData(dArray);
//
//	freeAll(dArray);
//
//	system("pause");
//	return 0;
//}