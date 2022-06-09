#include <stdio.h>
#pragma warning(disable: 4996)

int main(void)
{
	int opt;
	double num1, num2;
	double result;

	printf("1. µ¡¼À 2. »¬¼À 3. °ö¼À 4. ³ª´°¼À \n");
	printf("¼±ÅÃÇÏ½Ã¿À. \n");
	scanf("%d", &opt);
	printf("µÎ °³ÀÇ ½Ç¼ö ÀÔ·Â: ");
	scanf("%1f %1f", &num1, &num2);

	if (opt == 1)
		result = num1 + num2;
	if (opt == 2)
		result == num1 - num2;
	if (opt == 3)
		result == num1 * num2;
	if (opt == 4)
		result == num1 / num2;

	printf("°á°ú: % \n", result);
	return 0;

}
