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
		printf("������ ����?: ");
		scanf("%d", &input);
		total += input;
	}
	printf("�Է��� ���: %f \n", (double)total / num);
	return 0;
}