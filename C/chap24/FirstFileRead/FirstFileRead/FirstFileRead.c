#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int ch, i;
	FILE* fp = fopen("C:\Users\ASUS\Desktop\�ڵ�\C and Data structure\C-and-Data-structure\C\chap24\FirstFileWrite\FirstFileWrite\data.txt", "rt");
	if (fp == NULL) {
		puts("���� ���� ����!");
		return -1;
	}

	for (i = 0; i < 3; i++)
	{
		ch = fgetc(fp);
		printf("%c \n", ch);
	}
	fclose(fp);
	return 0;
}