#pragma warning(disable: 4996)
#include <stdio.h>

int main(void)
{
	int num1, num2;

	printf("�� ���� ������ �Է� �޽��ϴ�. \n");
	printf("���� 1�� �Է��Ͻÿ�:  \n");
	scanf("%d", &num1);
	printf("���� 2�� �Է��Ͻÿ�:  \n");
	scanf("%d", &num2);

	int result = num1 * num2;

	printf("%d * %d = %d \n", num1, num2, result);
	return 0;
}