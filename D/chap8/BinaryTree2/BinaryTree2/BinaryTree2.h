#ifndef __BINARY_TREE_H__
#define __BINARY_TREE_H__

typedef int BTData;

typedef struct _bTreeNode
{
	BTData data;
	struct _bTreeNode* left;
	struct _bTreeNode* right;
} BTreeNode;

BTreeNode* MakeBTreeNode(void);	// 노드 생성
BTData GetData(BTreeNode* bt);	// 노드에 저장된 데이터 반환
void SetData(BTreeNode* bt, BTData data);	// 데이터 저장

BTreeNode* GetLeftSubTree(BTreeNode* bt);	// 왼쪽 서브 트리에 저장된 데이터 반환
BTreeNode* GetRightSubTree(BTreeNode* bt);	// 오른쪽 서브 트리에 저장된 데이터 반환

void MakeLeftSubTree(BTreeNode* main, BTreeNode* sub);	// 서브 트리간에 연결을 담당하는 함수
void MakeRightSubTree(BTreeNode* main, BTreeNode* sub);


typedef void(*VisitFuncPtr)(BTData data);

void PreorderTraverse(BTreeNode* bt, VisitFuncPtr action); // 전위
void InorderTraverse(BTreeNode* bt, VisitFuncPtr action);	// 중위
void PostorderTraverse(BTreeNode* bt, VisitFuncPtr action);	// 후위

#endif