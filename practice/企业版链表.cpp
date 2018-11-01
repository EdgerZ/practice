//#define _CRT_SECURE_NO_WARNINGS
//
//#include <iostream>
//#include <cstring>
//#include <string.h>
//#include <cmath>
//#include <ctime>
//using namespace std;
//
//struct LinkList
//{
//	struct LinkNode* pHeader;
//	int m_size;
//};
//
//struct LinkNode
//{
//	struct LinkNode* next;
//};
//
//struct Personal
//{
//	struct LinkNode LNode;
//	char name[64];
//	int age;
//	int score;
//};
//
////��������г�ʼ��
//void* initLinkList()
//{
//	//���ٹ���ڵ㲢��ʼ��
//	LinkList* lList = (LinkList *)malloc(sizeof(LinkList));
//	lList->m_size = 0;
//	lList->pHeader = NULL;
//	return lList;
//}
//
////���û������Ľڵ���뵽������
////�����ʾָ��ָ��pos���λ���ϵĽڵ���Ҫ����ƶ�
////����pos = 2 �������½ڵ��posΪ2
//void insertToList(void* list, void* Data, int pos)
//{
//	LinkList* lList = (LinkList *)list;
//
//	if (pos < 0 || pos > lList->m_size)
//	{
//		cout << "��������Χ��Ĭ��β�壡" << endl;
//		pos = lList->m_size;
//	}
//
//	LinkNode* tempPtr = lList->pHeader;
//	LinkNode* prevPtr = lList->pHeader;
//	int i = 0;
//	for ( i = 0; i < pos; i++)
//	{
//		prevPtr = tempPtr;
//		tempPtr = tempPtr->next;
//	}
//	if (i == 0)
//	{
//		lList->pHeader = (struct LinkNode*)Data;
//		((struct LinkNode*)Data)->next = NULL;
//	}
//	else
//	{
//		prevPtr->next = (struct LinkNode*)Data;
//		((struct LinkNode*)Data)->next = tempPtr;
//	}
//	lList->m_size++;
//}
//
////������ӡ�ڵ����Ϣ
//void showNode(void* list, void(*myPrint)(void*))
//{
//	LinkList *lList = (LinkList *)list;
//	LinkNode *pNode = lList->pHeader;
//	int* tempPtr = NULL;
//	if (pNode == NULL)
//	{
//		cout << "����Ϊ�գ�" << endl;
//	}
//	else
//	{
//		int i = 0;
//		while (pNode != NULL)
//		{
//			cout << "�� " << i << " ���ڵ㣺" << endl;
//			myPrint((void*)pNode);
//			pNode = pNode->next;
//			i++;
//		}
//	}
//}
//
////�ص��������û��ṩ������ӡ����
//void myPrintPersonal(void* p)
//{
//	Personal * temp = (Personal *)p;
//	printf("������%s  ���䣺%d  ������%d\n", temp->name, temp->age, temp->score);
//}
//
////ɾ��ָ��λ�ýڵ�
//void deleteByPos(void* list, int pos)
//{
//	LinkList* lList = (LinkList*)list;
//	if (pos > lList->m_size)
//	{
//		cout << "�����������ƣ��޷�ɾ����" << endl;
//		return;
//	}
//	LinkNode *curPtr = NULL;
//	LinkNode *prevPtr = NULL;
//	curPtr = lList->pHeader;
//	
//	for (int i = 0; i < pos; i++)
//	{
//		prevPtr = curPtr;
//		curPtr = curPtr->next;
//		if (NULL == curPtr)
//		{
//			cout << "��ǰ�ڵ���Ϣ�����ڣ�ɾ��ʧ�ܣ�" << endl;
//			return;
//		}
//	}
//	prevPtr->next = curPtr->next;
//	free(curPtr);
//	curPtr = NULL;
//	lList->m_size--;
//	cout << "ɾ���ɹ�����ǰʣ���ܽڵ�����" << lList->m_size << endl;
//}
//
////ɾ�����нڵ㡢ע���������ڵ�
//void deleteAll(void* list)
//{
//	LinkList* lList = (LinkList *)list;
//	LinkNode* tempPtr = lList->pHeader;
//	LinkNode* nextPtr = NULL;
//	while (tempPtr != NULL)
//	{
//		nextPtr = tempPtr->next;
//		free(tempPtr);
//		tempPtr = nextPtr;
//	}
//	cout << "���нڵ��ͷųɹ���" << endl;
//
//	//�ͷŹ���ڵ�
//	free(lList);
//	cout << "����ڵ��ͷųɹ���" << endl;
//}
//
//typedef void* LList;
//
//int main()
//{
//	LList lList = initLinkList();
//	//�û����Զ�����������ò�ʹ�õ��ýӿڽ��в���ڵ�
//	struct Personal* pNode = NULL;
//	int i = 0;
//	while (i<10)
//	{
//		pNode = (Personal *)malloc(sizeof(Personal));
//		strcpy(pNode->name, "����");
//		sprintf(pNode->name, "%s%03d", pNode->name, i);
//		pNode->age = 10;
//		pNode->score = 100;
//		insertToList(lList, pNode, i);
//		i++;
//	}
//
//	showNode(lList, myPrintPersonal);
//	deleteByPos(lList, 1);
//	deleteByPos(lList, 1);
//	showNode(lList, myPrintPersonal);
//
//	deleteAll(lList);
//
//	system("pause");
//	return 0;
//} 