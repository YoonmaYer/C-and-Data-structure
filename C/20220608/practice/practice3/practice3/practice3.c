#pragma warning(disable: 4996)
#include <stdio.h>

int main(void)
{
	int result = 0;
	int num =1 ;

	while (num != 0)
	{
		printf("정수를 입력하시오: \n");
		scanf("%d", &num);
		result += num;
	}
	printf("%d", result);
	return 0;
}