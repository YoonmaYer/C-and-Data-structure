#include <stdio.h>
#pragma warning(disable: 4996)

int main(void)
{
	int num, abs;
	printf("���� �Է�: ");
	scanf("%d", &num);

	abs = num > 0 ? num : num * (-1); // ���� ������ ? :, ������ ��ȯ
	printf("����: %d \n", abs);
	return 0;
}
