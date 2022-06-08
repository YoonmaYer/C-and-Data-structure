#include <stdio.h>
#pragma warning(disable: 4996)

int main(void)
{
	int num;
	int sum = 0;
	int i = 1;

	while (i < 6)
	{
		printf("5개의 정수를 입력하라 \n");
		scanf("%d", &num);
		sum += num;
		i++;
	}
	printf("%d", sum);
	return 0;
}