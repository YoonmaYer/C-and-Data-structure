#include <stdio.h>

int main(void)
{
	int arr[5] = { 1, 2, 3, 4, 5 };

	int* ptr = &arr;

	for (int i = 0; i < 5; i++) {
		*(ptr + i) += 2;
	}
	for (int j = 0; j < 5; j++){
		printf("%d", ptr[j]);
}
	return 0;
}