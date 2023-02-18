#include <stdio.h>
#include "BinaryTree.h"

void InoderTraverse(BTreeNode* bt)
{
	if (bt == NULL) // bt가 NULL이면 재귀 탈출
		return;

	InoderTraverse(bt->left);
	printf("%d \n", bt->data);
	InoderTraverse(bt->right);
}
int main(void)
{
	BTreeNode* bt1 = MakeBTreeNode();
	BTreeNode* bt2 = MakeBTreeNode();
	BTreeNode* bt3 = MakeBTreeNode();
	BTreeNode* bt4 = MakeBTreeNode();

	SetData(bt1, 1);
	SetData(bt2, 2);
	SetData(bt3, 3);
	SetData(bt4, 4);

	MakeLeftSubTree(bt1, bt2);
	MakeRightSubTree(bt1, bt3);
	MakeLeftSubTree(bt2, bt4);

	// bt1의 왼쪽 자식 노드의 데이터 출력
	// printf("%d \n", GetData(GetLeftSubTree(bt1)));

	// bt1의 왼쪽 자식 노드의 왼쪽 자식 노드의 데이터 출력
	//printf("%d \n", GetData(GetLeftSubTree(GetLeftSubTree(bt1))));

	InoderTraverse(bt1);
	return 0;
}