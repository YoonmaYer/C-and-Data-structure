#include <stdio.h>
#pragma warning(disable: 4996)

int main(void)
{
	int num;
	int i = 0;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num);

	while (i<num)
	{
		printf("Hello world! \n");
		i++;
	}
	return 0;
}