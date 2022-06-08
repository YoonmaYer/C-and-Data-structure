#pragma warning(disable: 4996)
#include <stdio.h>

int main(void)
{
	int num;
	int i = 9;
	
	printf("insert Dan: ");
	scanf("%d", &num);

	while(i>0)
	{
		printf("%d * %d = %d \n", num, i, num * i);
		i--;
	}
	return 0;
}