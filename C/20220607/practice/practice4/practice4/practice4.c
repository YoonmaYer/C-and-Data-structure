#pragma warning(disable: 4996)
#include <stdio.h>

int main(void)
{
	int num1, num2, num3;
	printf("3���� ������ �Է��Ͻÿ� \n");
	scanf("%d", &num1);
	scanf("%d", &num2);
	scanf("%d", &num3);

	int result = num1 * num2 + num3;

	printf("%d * %d + %d= %d \n", num1, num2, num3, result);
	return 0;
}