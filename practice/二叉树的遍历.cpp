#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <string.h>
#include <cmath>
#include <ctime>
using namespace std;

typedef struct binaryTree
{
	char flag;
	struct binaryTree* lNode;
	struct binaryTree* rNode;
}binTree;

void recursionF(binTree* node)
{
	if (node == NULL)
	{
		return;
	}
	printf("%c ", node->flag);
	recursionF(node->lNode);
	recursionF(node->rNode);
}

void recursionM(binTree* node)
{
	if (node == NULL)
	{
		return;
	}
	recursionM(node->lNode);
	printf("%c ", node->flag);
	recursionM(node->rNode);
}

void recursionL(binTree* node)
{
	if (node == NULL)
	{
		return;
	}
	recursionL(node->lNode);
	recursionL(node->rNode);
	printf("%c ", node->flag);
}


int main()
{
	binTree node[7];
	for (int i = 0; i < 7; i++)
	{
		node[i].flag = 'A' + i;
		node[i].lNode = NULL;
		node[i].rNode = NULL;
	}
	node[0].lNode = &node[1];
	node[1].lNode = &node[2];
	node[1].rNode = &node[3];
	node[0].rNode = &node[4];
	node[4].lNode = &node[5];
	node[4].rNode = &node[6];

	cout << "先序遍历：";
	recursionF(node);
	putchar(10);

	cout << "中序遍历：";
	recursionM(node);
	putchar(10);

	cout << "后序遍历：";
	recursionL(node);
	putchar(10);

	system("pause");
	return 0;
}