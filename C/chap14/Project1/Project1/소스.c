#include <stdio.h>

void SquareBValue(int num)
{
	printf("%d\n", num * num);
}

void SquareByReference(int *ptr)
{
	int num = *ptr;
	*ptr = num * num;
}

int main(void)
{
	int result = 5;

	SquareBValue(result);
	SquareByReference(&result);
	printf("%d", result);


	return 0;

}