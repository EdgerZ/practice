//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//#include <string.h>
//#include <ctime>
//#include <cmath>
//
//using namespace std;
//class Node;
//class Header
//{
//public:
//	Node* First;
//	int size;
//	Node* Last;
//};
//
//class Node
//{
//public:
//	char name[64] = "";
//	int age = 0;
//
//	Node* m_next;
//};
//
////��ʼ����������
//void initLinkList(Header** Head)
//{
//	*Head = (Header*)malloc(sizeof(Header));
//	(*Head)->size = 0;
//	(*Head)->First = NULL;
//	(*Head)->Last = NULL;
//}
//
////���������ϵĽڵ�
//void createLinkNode(Header*Head)
//{
//	char name[32] = "����";
//	char nameNum[32] = "";
//	static int i = 1;
//	sprintf(nameNum, "%03d", i);
//	strcat(name, nameNum);
//
//	int age = i+20;
//	i++;
//
//	Node* tempNode = (Node*)malloc(sizeof(Node));
//	tempNode->age = age;
//	strcpy(tempNode->name, name);
//	tempNode->m_next = NULL;
//
//	Node* firstNode = Head->First;
//	Node* lastNode = Head->Last;
//	if (NULL == firstNode)
//	{
//		Head->First = tempNode;
//		Head->Last = tempNode;
//		Head->size = 1;
//	}
//	else
//	{
//		lastNode->m_next = tempNode;
//		Head->Last = tempNode;
//		Head->size++;
//	}
//
//}
//
////��������
//void showNode(Header*Head)
//{
//	Node* firstNode = Head->First;
//	if (firstNode == NULL)
//	{
//		cout << "����Ϊ��!" << endl;
//	}
//	for (int i = 0; i < Head->size; i++)
//	{
//		cout << "��" << i + 1 << "���ڵ�:" << firstNode->name << "  " << firstNode->age << endl;
//		firstNode = firstNode->m_next;
//	}
//}
//
//
////��ת����
//void reverseLinkNode(Header* Head)
//{
//	Node* cNode = Head->First;
//	if (NULL == Head->First)
//	{
//		cout << "�������޷���ת!" << endl;
//		return;
//	}
//
//	Node* prevNode = cNode;
//	cNode = cNode->m_next;
//	Node* nextNode = cNode->m_next;
//
//	while (1)
//	{
//		cNode->m_next = prevNode;
//
//		prevNode = cNode;
//		cNode = nextNode;
//		if (cNode == NULL)
//		{
//			break;
//		}
//		nextNode = cNode->m_next;
//
//	}
//	Node* temp = Head->First;
//	//�����������Ҫ��ԭ��һ���ڵ�ĺ��ָ����ΪNULL 
//	temp->m_next = NULL;
//	Head->First = Head->Last;
//	Head->Last = temp;
//	cout << "reverse over!" << endl;
//
//
//}
//
//void freeNode(Header* Head)
//{
//	Node* cNode = Head->First;
//	Node* pNode = cNode->m_next;
//	int i = 0;
//	while (1)
//	{
//		i++;
//		free(cNode);
//		cNode = pNode;
//		if (cNode == NULL)
//		{
//			break;
//		}
//		pNode = pNode->m_next;
//	}
//	cout << "�ڵ��ͷ����" << "���ͷ�" << i << "���ڵ�" << endl;
//	free(Head);
//	cout << "ͷ����ͷ����" << endl;
//}
//
//int main()
//{
//	Header* Head = NULL;
//	initLinkList(&Head);
//	for (int i = 0; i < 10; i++)
//	{
//		createLinkNode(Head);
//	}
//	showNode(Head);
//	reverseLinkNode(Head);
//	showNode(Head);
//	freeNode(Head);
//	system("pause");
//	return 0;
//}