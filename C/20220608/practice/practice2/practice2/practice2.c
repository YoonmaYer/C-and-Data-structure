#pragma warning(disable: 4996)
#include <stdio.h>

int main(void)
{
	int num;
	int i = 1;

	printf("���� ������ �Է��Ͻÿ�: ");
	scanf("%d", &num);

	while (i < num+1)
	{
		printf("%d \n", 3 * i);
		i++;
	}
	return 0;
}