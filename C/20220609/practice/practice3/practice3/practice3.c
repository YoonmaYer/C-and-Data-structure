#include <stdio.h>
#pragma warning(disable: 4996)

int main(void)
{
	int lang, eng, math;

	printf("����, ����, ���� ������ ������� �Է��Ͻÿ�. \n");
	scanf("%d %d %d", &lang, &eng, &math);
	int avg = (lang + eng + math) / 3;

	if (avg >= 90)
		printf("A");
	else if (avg >= 80)
		printf("B");
	else if (avg >= 70)
		printf("C");
	else if (avg >= 50)
		printf("D");
	else if (avg < 40)
		printf("F");
	else
		printf("�� ����?");

	return 0;
}