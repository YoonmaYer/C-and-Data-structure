#include <stdio.h>

int main(void)
{
	int num;
	printf("7의 배수와 9의 배수 출력 \n");

	for (num = 1; num < 100; num++)
	{
		if (num % 7 == 0 || num % 9 == 0)
			printf("%d \n", num);
	}
	return 0;
}