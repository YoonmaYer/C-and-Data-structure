#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	FILE* fp;
	if ((fp = fopen("data.txt", "wt")) == NULL)
		return;

	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);
	fclose(fp);

	return 0;
}