#pragma warning(disable: 4996)
#include <stdio.h>

int main(void)
{
	int num1, num2;
	int result;
	printf("���� �� ���� �Է��϶�. \n");
	scanf("%d %d \n", &num1, &num2);

	if (num1 > num2)
		result = num1 - num2;

	else
		result = num2 - num1;
	
	printf("���: %d \n", result);
	return 0;	
}