#pragma warning(disable: 4996)
#include <stdio.h>

int main(void)
{
	int result = 0;
	int num =1 ;

	while (num != 0)
	{
		printf("������ �Է��Ͻÿ�: \n");
		scanf("%d", &num);
		result += num;
	}
	printf("%d", result);
	return 0;
}