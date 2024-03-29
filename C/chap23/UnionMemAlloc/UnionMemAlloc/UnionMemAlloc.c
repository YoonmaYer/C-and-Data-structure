#include <stdio.h>

typedef struct sbox // 구조체 정의
{
	int mem1;
	int mem2;
	double mem3;
} SBox;

typedef union ubox	// 공용체 정의
{
	int mem1;
	int mem2;
	double mem3;
} UBox;

int main(void)
{
	SBox sbx;
	UBox ubx;
	printf("%p %p %p \n", &sbx.mem1, &sbx.mem2, &sbx.mem3);
	printf("%p %p %p \n", &ubx.mem1, &ubx.mem2, &ubx.mem3);
	printf("%d %d \n", sizeof(SBox), sizeof(UBox));
	return 0;
}