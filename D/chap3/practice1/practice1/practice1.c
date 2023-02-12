#include<stdio.h>
#include "ArrayList.h"

int main(void)
{
	List list;
	int data = 0;
	ListInit(&list);

	// 리스트 생성 및 1~9까지의 데이터 저장
	for (int i = 1; i < 10; i++) 
		LInsert(&list, i);
	
	
	// 순차적으로 참조하여 누적합 계산
	int LSum = 0;
	if(LFirst(&list, &data))
	{ 
		LSum += data;
	while (LNext(&list,&data))
		LSum += data;
	
	}
	printf("%d \n", LSum);

	// 리스트에 저장된 값 중 2,3 배수에 해당하는 값 모두 삭제
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

	// 리스트에 저장된 값을 순차출력
	
	printf("현재 데이터의 수: %d \n", LCount(&list));

	if (LFirst(&list, &data))
	{
		printf("%d ", data);

		while (LNext(&list, &data))
			printf("%d ", data);
	}

	printf("\n\n");

	return 0;
}