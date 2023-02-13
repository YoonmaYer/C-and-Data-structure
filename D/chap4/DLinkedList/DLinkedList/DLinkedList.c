#include <stdio.h>
#include <stdlib.h>
#include "DLinkedList.h"

void ListInit(List* plist)	// �ʱ�ȭ
{
	plist->head = (Node*)malloc(sizeof(Node));	// ���� ��� ����
	plist->head->next = NULL;
	plist->comp = NULL;
	plist->numofData = 0;
}

void FInsert(List* plist, LData data)
{
	Node* newNode = (Node*)malloc(sizeof(Node));	// �� ��� ����
	newNode->data = data;	// �� ��忡 ������ ����

	newNode->next = plist->head->next;	// �� ��尡 �ٸ� ��带 ����Ű�� ��
	plist->head->next = newNode;	// ���� ��尡 �� ��带 ����Ű�� ��

	(plist->numofData)++;	// ����� ����� �� �ϳ� ������Ŵ
}

void SInsert(List* plist, LData data)
{
	Node* newNode = (Node*)malloc(sizeof(Node));		// �� ����� ����
	Node* pred = plist->head;	// pred�� ���� ��带 ����Ŵ
	newNode->data = data;	// �� ��忡 ������ ����

	// �� ��尡 �� ��ġ�� ã�� ���� �ݺ���!
	while (pred->next != NULL && plist->comp(data, pred->next->data) != 0)
	{
		pred = pred->next;		// ���� ���� �̵�
	}

	newNode->next = pred->next;		// �� ����� �������� ����
	pred->next = newNode;			// �� ����� ������ ����

	(plist->numofData)++;			// ����� �������� �� �ϳ� ����
}

void LInsert(List* plist, LData data)	// ���� ���ؿ� ���� �Լ� ���� �޶���
{
	if (plist->comp == NULL)
		FInsert(plist, data); 
	else
		SInsert(plist, data);
}

int LFirst(List* plist, LData* pdata)
{
	if (plist->head->next == NULL)	// ���� ��尡 NULL�� ����Ų�ٸ�
		return FALSE;				// ��ȯ �����Ͱ� ����

	plist->before = plist->head;	// before�� ���� ��带 ����Ű�� ��
	plist->cur = plist->head->next;	// cur�� ù ��° ��带 ����Ű�� ��

	*pdata = plist->cur->data;		// ù ��° ����� �����͸� ����
	return TRUE;					// ������ ��ȯ ����
}

int LNext(List* plist, LData* pdata)
{
	if (plist->cur->next == NULL)	// cur�� NULL�� ����Ų�ٸ�
		return FALSE;				// ��ȯ�� �����Ͱ� ����

	plist->before = plist->cur;		// cur�� ����Ű�� ���� before�� ����Ŵ
	plist->cur = plist->cur->next;	// cur�� �� ���� ��带 ����Ŵ

	*pdata = plist->cur->data;		// cur�� ����Ű�� ����� ������ ����
	return TRUE;					// ������ ��ȯ ����
}

LData LRemove(List* plist)
{
	Node* rpos = plist->cur;		// �Ҹ� ����� �ּ� ���� rpos�� ����
	LData rdata = rpos->data;		// �Ҹ� ����� �����͸� rdata�� ����

	plist->before->next = plist->cur->next;	// �Ҹ� ����� ����Ʈ���� ����
	plist->cur = plist->before;		// cur�� ����Ű�� ��ġ�� ������

	free(rpos);						// ����Ʈ���� ���ŵ� ��� �Ҹ�
	(plist->numofData)--;			// ����� �������� �� �ϳ� ����
	return rdata;					// ���ŵ� ����� ������ ��ȯ
}

int LCount(List* plist)
{
	return plist->numofData;
}

void SetSortRule(List* plist, int (*comp)(LData d1, LData d2))
{
	plist->comp = comp;
}