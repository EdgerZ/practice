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
////对链表进行初始化
//void* initLinkList()
//{
//	//开辟管理节点并初始化
//	LinkList* lList = (LinkList *)malloc(sizeof(LinkList));
//	lList->m_size = 0;
//	lList->pHeader = NULL;
//	return lList;
//}
//
////将用户创建的节点加入到链表中
////插入表示指针指向pos这个位置上的节点需要向后移动
////例：pos = 2 则插入后新节点的pos为2
//void insertToList(void* list, void* Data, int pos)
//{
//	LinkList* lList = (LinkList *)list;
//
//	if (pos < 0 || pos > lList->m_size)
//	{
//		cout << "超出链表范围，默认尾插！" << endl;
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
////遍历打印节点的信息
//void showNode(void* list, void(*myPrint)(void*))
//{
//	LinkList *lList = (LinkList *)list;
//	LinkNode *pNode = lList->pHeader;
//	int* tempPtr = NULL;
//	if (pNode == NULL)
//	{
//		cout << "链表为空！" << endl;
//	}
//	else
//	{
//		int i = 0;
//		while (pNode != NULL)
//		{
//			cout << "第 " << i << " 个节点：" << endl;
//			myPrint((void*)pNode);
//			pNode = pNode->next;
//			i++;
//		}
//	}
//}
//
////回调函数由用户提供用来打印数据
//void myPrintPersonal(void* p)
//{
//	Personal * temp = (Personal *)p;
//	printf("姓名：%s  年龄：%d  分数：%d\n", temp->name, temp->age, temp->score);
//}
//
////删除指定位置节点
//void deleteByPos(void* list, int pos)
//{
//	LinkList* lList = (LinkList*)list;
//	if (pos > lList->m_size)
//	{
//		cout << "超出容量限制，无法删除！" << endl;
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
//			cout << "当前节点信息不存在！删除失败！" << endl;
//			return;
//		}
//	}
//	prevPtr->next = curPtr->next;
//	free(curPtr);
//	curPtr = NULL;
//	lList->m_size--;
//	cout << "删除成功！当前剩余总节点数：" << lList->m_size << endl;
//}
//
////删除所有节点、注销链表管理节点
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
//	cout << "所有节点释放成功！" << endl;
//
//	//释放管理节点
//	free(lList);
//	cout << "管理节点释放成功！" << endl;
//}
//
//typedef void* LList;
//
//int main()
//{
//	LList lList = initLinkList();
//	//用户将自定义的链表创建好并使用调用接口进行插入节点
//	struct Personal* pNode = NULL;
//	int i = 0;
//	while (i<10)
//	{
//		pNode = (Personal *)malloc(sizeof(Personal));
//		strcpy(pNode->name, "张三");
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