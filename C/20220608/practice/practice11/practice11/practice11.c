#pragma warning(disable: 4996)
#include <stdio.h>

int main(void)
{
	int fact, i;
	int result = 1;		// 팩토리얼의 계산결과 저장
	printf("factorial numb: ");
	scanf("%d", &fact);

	for (i = 1; i <= fact; i++)
		result = result * i;

	printf("%d! = %d \n", fact, result);
	return 0;
}