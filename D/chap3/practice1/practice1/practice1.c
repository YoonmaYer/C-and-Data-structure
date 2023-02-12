#include<stdio.h>
#include "ArrayList.h"

int main(void)
{
	List list;
	int data = 0;
	ListInit(&list);

	// ����Ʈ ���� �� 1~9������ ������ ����
	for (int i = 1; i < 10; i++) 
		LInsert(&list, i);
	
	
	// ���������� �����Ͽ� ������ ���
	int LSum = 0;
	if(LFirst(&list, &data))
	{ 
		LSum += data;
	while (LNext(&list,&data))
		LSum += data;
	
	}
	printf("%d \n", LSum);

	// ����Ʈ�� ����� �� �� 2,3 ����� �ش��ϴ� �� ��� ����
	if (LFirst(&list, &data))
	{
		if (data % 2 == 0 || data % 3 == 0)
			LRemove(&list);

		while (LNext(&list, &data))
		{
			if (data / 2 == 0 || data / 3 == 0)
				LRemove(&list);
		}
	}

	// ����Ʈ�� ����� ���� �������
	
	printf("���� �������� ��: %d \n", LCount(&list));

	if (LFirst(&list, &data))
	{
		printf("%d ", data);

		while (LNext(&list, &data))
			printf("%d ", data);
	}

	printf("\n\n");

	return 0;
}