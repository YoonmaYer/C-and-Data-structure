#include <stdio.h>

int main(void)
{
	int arr[6] = { 1,2,3,4,5,6 };

	int* frontptr = &arr[0]; // 1
	int* rearptr = &arr[5]; // 6
	int temp = 0;

	for (int i = 0; i < 3; i++) {
		temp = *frontptr; // 1
		*frontptr = *rearptr; // 6 
		*rearptr = temp; // 1
		frontptr += 1; // 반복할때마다 1, 2, 3
		rearptr -= 1; // 반복할때마다 6, 5, 4
	}

	for (int i = 0; i < 6; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}