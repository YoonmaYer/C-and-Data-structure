#include <stdio.h>
#pragma warning(disable: 4996)

int main(void)
{
	int total = 0, num =1;

	while (num != 0)
	{
		printf("���� �Է�(0 to quit): ");
		scanf("%d", &num);
		total += num;
	}
	printf("�հ�: %d \n", total);
	return 0;
}