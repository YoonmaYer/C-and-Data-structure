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

	printf("이름 입력: "); scanf("%s", man.name);
	printf("주민등록번호 입력: "); scanf("%s", man.personNumber);
	printf("급여정보 입력: "); scanf("%d", &(man.pay));

	printf("----------------\n");

	printf("이름: %s \n", man.name);
	printf("주민등록번호: %s \n", man.personNumber);
	printf("급여정보: %d", man.pay);

	return 0;
}