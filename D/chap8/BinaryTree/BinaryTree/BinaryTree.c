#include <stdio.h>
#include <stdlib.h>
#include "BinaryTree.h"

BTreeNode* MakeBTreeNode(void)	// ��� ����
{
	BTreeNode* nd = (BTreeNode*)malloc(sizeof(BTreeNode));
	nd->left = NULL;
	nd->right = NULL;
	return nd;
}
BTData GetData(BTreeNode* bt)	// ��忡 ����� ������ ��ȯ
{
	return bt->data;
}

void SetData(BTreeNode* bt, BTData data)	// ������ ����
{
	bt->data = data;
}

BTreeNode* GetLeftSubTree(BTreeNode* bt)	// ���� ���� Ʈ���� ����� ������ ��ȯ
{
	return bt->left;
}
BTreeNode* GetRightSubTree(BTreeNode* bt)	// ������ ���� Ʈ���� ����� ������ ��ȯ
{
	return bt->right;
}

void MakeLeftSubTree(BTreeNode* main, BTreeNode* sub)	// ���� Ʈ������ ������ ����ϴ� �Լ�
{
	if (main->left != NULL)
		free(main->left);

	main->left = sub;
}

void MakeRightSubTree(BTreeNode* main, BTreeNode* sub)
{
	if (main->right != NULL)
		free(main->right);

	main->right = sub;
}