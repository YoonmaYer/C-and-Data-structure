#include <stdio.h>
#pragma warning(disable: 4996)

int main(void)
{
	int num1, num2;

	printf("���� 1�� �Է��϶� \n");
	scanf("%d", &num1);
	printf("���� 2�� �Է��϶� \n");
	scanf("%d", &num2);

	int result1 = num1 / num2;
	int result2 = num1 % num2;

	printf("%d / %d = %d, �������� %d�Դϴ�. \n", num1, num2, result1, result2);
	return 0;
}