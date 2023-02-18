#include <stdio.h>
#include <stdlib.h>
#include "BinaryTree2.h"

BTreeNode* MakeBTreeNode(void)	// 노드 생성
{
	BTreeNode* nd = (BTreeNode*)malloc(sizeof(BTreeNode));
	nd->left = NULL;
	nd->right = NULL;
	return nd;
}
BTData GetData(BTreeNode* bt)	// 노드에 저장된 데이터 반환
{
	return bt->data;
}

void SetData(BTreeNode* bt, BTData data)	// 데이터 저장
{
	bt->data = data;
}

BTreeNode* GetLeftSubTree(BTreeNode* bt)	// 왼쪽 서브 트리에 저장된 데이터 반환
{
	return bt->left;
}
BTreeNode* GetRightSubTree(BTreeNode* bt)	// 오른쪽 서브 트리에 저장된 데이터 반환
{
	return bt->right;
}

void MakeLeftSubTree(BTreeNode* main, BTreeNode* sub)	// 서브 트리간에 연결을 담당하는 함수
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

void PreorderTraverse(BTreeNode* bt, VisitFuncPtr action)
{
	if (bt == NULL)
		return;

	action(bt->data);
	PreorderTraverse(bt->left, action);
	PreorderTraverse(bt->right, action);
}

void InorderTraverse(BTreeNode* bt, VisitFuncPtr action)
{
	if (bt == NULL)
		return;

	InorderTraverse(bt->left, action);
	action(bt->data);
	InorderTraverse(bt->right, action);
}

void PostorderTraverse(BTreeNode* bt, VisitFuncPtr action)
{
	if (bt == NULL)
		return;

	PostorderTraverse(bt->left, action);
	PostorderTraverse(bt->right, action);
	action(bt->data);
}