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
//	cout << "��̬�����ʼ�����!" << endl;
//}
//
////���³�ʼ����̬����Ĵ�С
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
//	//���ж�Ҫ�����λ���Ƿ񳬹��˶�̬����ķ�Χ
//	if (pos >= array->m_capacity)
//	{
//		reInitDynamicArray(array, pos);
//	}
//
//	//���ж�Ҫ�����λ���Ƿ�Ϊ��
//#if debugFlag
//	printf("array->m_array = [%p], tempPtr2 = [%p]\n", array->m_array, array->m_array+pos);
//#endif
//	void *tempPtr2 = array->m_array+pos;
//
//	if (*(int*)tempPtr2 == NULL)
//	{
//		cout << "��λ�õ�ǰΪ�գ����Բ��룡" << endl;
//		*(int**)tempPtr2 = (int*)Data;
//		//void* ret = memcpy(&tempPtr2, &Data, sizeof(void*));
//#if debugFlag
//		printf("��������:[%s]_[%d]_[%d]\n", ((Person*)*(int*)tempPtr2)->name, ((Person*)*(int*)tempPtr2)->age, ((Person*)*(int*)tempPtr2)->score);
//#endif
//		cout << "����ɹ���" << endl;
//		array->m_size++;
//	}
//	else
//	{
//		cout << "��λ�õ�ǰ�������ݴ��ڣ�����ʧ�ܣ�" << endl;
//		return;
//	}
//}
//
////ɾ��ָ��λ�õ�����
//void deleteByPos(dynamicArray* array, int pos)
//{
//	if (array == NULL)
//	{
//		cout << "��̬�����ʼ��ʧ��!" << endl;
//	}
//	void* tempPtr = array->m_array+pos;
//	if (*(int **)tempPtr == NULL)
//	{
//		cout << "��ǰλ��û�����ݣ�ɾ��ʧ��!" << endl;
//		return;
//	}
//	else
//	{
//		free(*(int **)tempPtr);
//		cout << "�����ͷųɹ���" << endl;
//		*(int **)tempPtr = NULL;
//		cout << "��ǰλ������ָ���ÿգ�" << endl;
//	}
//}
//
////������ӡ���������ݵĽڵ㲢ע���ڵ�λ��
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
//			cout << "��ǰλ�ã��� " << i << " ��" << endl;
//			printf("������\n\t%s\n���䣺\n\t%d\n������\n\t%d\n", ((Person*)*(int*)tempPtr)->name, ((Person*)*(int*)tempPtr)->age, ((Person*)*(int*)tempPtr)->score);
//			flag = 1;
//		}
//	}
//	if (flag == 0)
//	{
//		cout << "��ǰ��̬������û���κ����ݣ�" << endl;
//	}
//}
//
////�ͷ�������̬����ṹ��
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
//			//�ͷŶ�̬����洢������
//			free(*(int **)tempPtr);
//			*(int **)tempPtr = NULL;
//			cout << "�ͷ��˵� " << i << " ������" << endl;
//		}
//	}
//	cout << "����Ԫ���е������Ѿ����ͷţ���ʼ�ͷŶ�̬����" << endl;
//	free(array->m_array);
//	array->m_array = NULL;
//	cout << "��̬�����ͷųɹ�!��ʼ�ͷŹ���ڵ�" << endl;
//	free(array);
//	cout << "����ڵ��ͷųɹ���" << endl;
//	array = NULL;
//}
//
//int main()
//{
//	//������̬����
//	dynamicArray *dArray = NULL;
//	initDynamicArray(&dArray, 20);
//
//#if debugFlag
//	printf("�����Ķ�̬�����ַΪ��%p\n", dArray);
//#endif
//
//	//������Ҫ��̬�����ŵ�����
//	Person *p[10];
//	for (int i = 0; i < 10; i++)
//	{
//		p[i] = (Person *)malloc(sizeof(Person));
//		strcpy(p[i]->name, "����");
//		sprintf(p[i]->name, "%s%03d", p[i]->name, i);
//		p[i]->age = 10+i;
//		p[i]->score = 90+i;
//	}
//	
//	//ʵ����̬�����ڲ�������
//	insertDataToDArray(p[3], 25, dArray);
//	cout << "��̬���鵱ǰ����Ϊ��" << dArray->m_capacity << endl;
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