#include <stdio.h>
#pragma warning(disable: 4996)

int main(void)
{
	int opt;
	double num1, num2;
	double result;

	printf("1. ���� 2. ���� 3. ���� 4. ������ \n");
	printf("�����Ͻÿ�. \n");
	scanf("%d", &opt);
	printf("�� ���� �Ǽ� �Է�: ");
	scanf("%1f %1f", &num1, &num2);

	if (opt == 1)
		result = num1 + num2;
	if (opt == 2)
		result == num1 - num2;
	if (opt == 3)
		result == num1 * num2;
	if (opt == 4)
		result == num1 / num2;

	printf("���: % \n", result);
	return 0;

}
