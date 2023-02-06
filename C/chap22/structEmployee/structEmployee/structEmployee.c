#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct employee
{
	char name[20];
	char personNum[20];
	int pay;
};

int main(void)
{
	struct employee arr[3] = {
		{"µŒ∑ÁπÃ", "010-1234-5678", 500},
		{"∞≈∫œ¿Ã", "010-0000-0001", 1}, 
		{"±Ë±‚≈∏", "010-2121-2121", 777}
	};

	for (int i = 0; i < 3; i++)
		printf("%s %s %d \n", arr[i].name, arr[i].personNum, arr[i].pay);

	return 0;
}