#include "SimpleHeap.h"

void HeapInit(Heap* ph)	// ���� �ʱ�ȭ
{
	ph->numofData = 0;
}

int HIsEmpty(Heap* ph)	// ���� ������� Ȯ��
{
	if (ph->numofData == 0)
		return TRUE;
	else
		return FALSE;
}

int GetParentIDX(int idx)	// �θ� ����� �ε��� �� ��ȯ
{
	return idx / 2;
}

int GetLChildIDX(int idx)		// ���� �ڽ� ����� �ε��� �� ��ȯ
{
	return idx * 2;
}

int GetRChildIDX(int idx)		// ������ �ڽ� ����� �ε��� �� ��ȯ
{
	return GetLChildIDX(idx) + 1;
}

// �� ���� �ڽ� ��� �� ���� �켱������ �ڽ� ��� �ε��� �� ��ȯ
int GetHiPriChildIDX(Heap* ph, int idx)
{
	// �ڽ� ��尡 �������� �ʴ´ٸ�
	if (GetLChildIDX(idx) > ph->numofData)
		return 0;

	// �ڽ� ��尡 ���� �ڽ� ��� �ϳ��� �����Ѵٸ�
	else if(GetLChildIDX(idx) == ph->numofData)
		return GetLChildIDX(idx);

	// �ڽ� ��尡 �� �� �����Ѵٸ�
	else
	{
		// ������ �ڽ� ����� �켱������ ���ٸ�
		if (ph->heapArr[GetLChildIDX(idx)].pr
			> ph->heapArr[GetRChildIDX(idx)].pr)
			return GetRChildIDX;

		// ���� �ڽ� ����� �켱������ ���ٸ�
		else
			return GetLChildIDX;
	}
}

// ���� ������ ����
void HInsert(Heap* ph, HData data, Priority pr)
{
	int idx = ph->numofData + 1;	// �� ��尡 ����� �ε��� ���� idx�� ����
	HeapElem nelem = { pr, data };	// �� ����� ���� �� �ʱ�ȭ

	// �� ��尡 ����� ��ġ�� ��Ʈ ����� ��ġ�� �ƴ϶�� while�� �ݺ�
	while (idx != 1)
	{
		// �� ���� �θ� ����� �켱���� ��
		if (pr < (ph->heapArr[GetParentIDX(idx)].pr))	// �� ����� �켱���� ���ٸ�
		{
			// �θ� ��带 �� ���� ����, ������ ����
			ph->heapArr[idx] = ph->heapArr[GetParentIDX(idx)];

			// �� ��带 �� ���� �ø�, ������ �ø����� �ʰ� �ε��� ���� ����
			idx = GetParentIDX(idx);
		}
		else
			break; // �� ����� �켱������ ���� �ʴٸ�
	}

	ph->heapArr[idx] = nelem;	// �� ��带 �迭�� ����
	ph->numofData += 1;
}

// ������ ������ ����
HData HDelete(Heap* ph)
{
	HData retData = (ph->heapArr[1]).data;	// ��ȯ�� ���ؼ� ������ ������ ����
	HeapElem lastElem = ph->heapArr[ph->numofData];	// ���� ������ ��� ����

	// �Ʒ��� ���� parentIdx���� ������ ��尡 ����� ��ġ������ ���
	int parentIdx = 1;	// ��Ʈ ��尡 ��ġ�ؾ� �� �ε��� �� ����
	int childIdx;

	// ��Ʈ ����� �켱������ ���� �ڽ� ��带 �������� �ݺ��� ����
	while (childIdx = GetHiPriChildIDX(ph, parentIdx))
	{
		if (lastElem.pr <= ph->heapArr[childIdx].pr)	// ������ ���� �켱���� ��
			break;	// ������ ����� �켱������ ������ �ݺ��� Ż��

		// ������ ��庸�� �켱������ ������ �񱳴�� ����� ��ġ�� �� ���� �ø�
		ph->heapArr[parentIdx] = ph->heapArr[childIdx];
		parentIdx = childIdx;	// ������ ��尡 ����� ��ġ������ �� ���� ����
	}		// �ݺ��� Ż���ϸ� parentIdx���� ������ ����� ��ġ������ �����

	ph->heapArr[parentIdx] = lastElem;	// ������ ��� ���� ����
	ph->numofData -= 1;
	return retData;
}