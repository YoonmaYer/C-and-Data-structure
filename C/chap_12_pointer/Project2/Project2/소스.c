#include <stdio.h>

int main(void)
{
	int arr[5] = { 1, 2, 3, 4, 5 };

	int* ptr = &arr;

	for (int i = 0; i < 5; i++) {
		printf("%d ", ptr[i]);

	}
	printf("\n");

		for (int j = 0; j < 5; j++) {
			ptr[j] += 2;
			printf("%d ", ptr[j]);
		}
		return 0;
	}
	
