#include <stdio.h>
#pragma warning(disable: 4996)

int main(void)
{
	int num;
	int i = 0;

	printf("정수를 입력하시오: ");
	scanf("%d", &num);

	while (i<num)
	{
		printf("Hello world! \n");
		i++;
	}
	return 0;
}