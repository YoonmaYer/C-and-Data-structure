#pragma warning(disable: 4996)
#include <stdio.h>

int main(void)
{
	int num;

	printf("정수를 입력하라");
	scanf("%d", &num);

	int result = num * num;
	
	printf("%d의 제곱은 %d \n", num, result);

}