#include <stdio.h>

void Swap3(int *ptr1, int *ptr2, int *ptr3)
{
	int temp = *ptr3;

	*ptr3 = *ptr2;
	*ptr2 = *ptr1;
	*ptr1 = temp;

}

int main(void)
{
	int num1 = 1;
	int num2 = 2;
	int num3 = 3;

	Swap3(&num1, &num2, &num3);
	printf("%d %d %d", num1, num2, num3); // num1 = 3, num2 = 1, num3 = 2

	return 0;
}