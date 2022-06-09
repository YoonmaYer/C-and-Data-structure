#pragma warning(disable: 4996)
#include <stdio.h>

int main(void)
{
	int num1, num2, result;
	printf("두 수의 차를 계산합니다. 정수를 입력하시오. \n");
	scanf("%d %d", &num1, &num2);

	result = (num1 < num2) ? num2 - num1 : num1 - num2;
	printf("%d \n", result);
	return 0;
}