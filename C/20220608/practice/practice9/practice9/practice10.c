#pragma warning(disable: 4996)
#include <stdio.h>

int main(void)
{
	int start, end;
	int result;

	printf("���۰� �� �Է� : ");
	scanf("%d %d", &start, &end);

	for (result = 0; start <= end; start++)
		result += start;

	printf("�հ�: %d \n", result);
	return 0;
}