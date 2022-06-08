#include <stdio.h>
#pragma warning(disable: 4996)

int main(void)
{
	int total = 0, i = 0;
	int num, input;

	printf("insert number");
	scanf("%d", &num);

	while (i++ < num)
	{
		printf("정수의 수는?: ");
		scanf("%d", &input);
		total += input;
	}
	printf("입력의 평균: %f \n", (double)total / num);
	return 0;
}