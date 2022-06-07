#include <stdio.h>
#pragma warning(disable: 4996)

int main(void)
{
	int num1, num2;

	printf("정수 1을 입력하라 \n");
	scanf("%d", &num1);
	printf("정수 2를 입력하라 \n");
	scanf("%d", &num2);

	int result1 = num1 / num2;
	int result2 = num1 % num2;

	printf("%d / %d = %d, 나머지는 %d입니다. \n", num1, num2, result1, result2);
	return 0;
}