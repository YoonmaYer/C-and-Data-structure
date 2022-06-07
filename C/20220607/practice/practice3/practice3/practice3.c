#pragma warning(disable: 4996)
#include <stdio.h>

int main(void)
{
	int num1, num2;

	printf("두 개의 정수를 입력 받습니다. \n");
	printf("정수 1을 입력하시오:  \n");
	scanf("%d", &num1);
	printf("정수 2를 입력하시오:  \n");
	scanf("%d", &num2);

	int result = num1 * num2;

	printf("%d * %d = %d \n", num1, num2, result);
	return 0;
}