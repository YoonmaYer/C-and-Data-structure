#include <stdio.h>
#pragma warning(disable: 4996)

int main(void)
{
	int num, abs;
	printf("정수 입력: ");
	scanf("%d", &num);

	abs = num > 0 ? num : num * (-1); // 조건 연산자 ? :, 참값을 반환
	printf("절댓값: %d \n", abs);
	return 0;
}
