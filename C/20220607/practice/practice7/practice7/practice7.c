#pragma warning(disable: 4996)
#include <stdio.h>

int main(void)
{
	int num1, num2, num3;
	int result;
	scanf("%d %d %d", &num1, &num2, &num3);

	result = (num1 - num2) * (num2 + num3) * (num3 % num1);

	printf("연산결과 : %d \n", result);
	return 0;
}