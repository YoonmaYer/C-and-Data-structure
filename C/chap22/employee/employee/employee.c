#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct employee
{
	char name[20];
	char personNumber[20];
	int pay;
};

int main(void)
{
	struct employee man;

	printf("�̸� �Է�: "); scanf("%s", man.name);
	printf("�ֹε�Ϲ�ȣ �Է�: "); scanf("%s", man.personNumber);
	printf("�޿����� �Է�: "); scanf("%d", &(man.pay));

	printf("----------------\n");

	printf("�̸�: %s \n", man.name);
	printf("�ֹε�Ϲ�ȣ: %s \n", man.personNumber);
	printf("�޿�����: %d", man.pay);

	return 0;
}