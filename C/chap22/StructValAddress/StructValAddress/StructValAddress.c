#include<stdio.h>

struct point
{
	int xpos;
	int ypos;
};

struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};
// ����ü ������ �ּҰ��� ����ü ������ ù ��° ����� �ּ� ���� �����ϴ�.
int main(void)
{
	struct point pos = { 10,20 };
	struct person man = { "�̽±�", "010-1212-0001", 21 };

	printf("%p %p \n", &pos, &pos.xpos);
	printf("%p %p \n", &man, man.name);
	return 0;
}