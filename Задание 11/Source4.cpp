#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	int x, y;
	printf("������� x: ");
	scanf_s("%i", &x);
	printf("������� y: ");
	scanf_s("%i", &y);
	if ((x > 0) & (y > 0))
		printf("I ��������");
	else
		if ((x < 0) & (y > 0))
			printf("II ��������");
		else
			if ((x < 0) & (y < 0))
				printf("III ��������");
			else printf("IV ��������");
	return 0;
}