#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	printf("������� a: ");
	scanf_s("%i", &a);
	printf("������� b: ");
	scanf_s("%i", &b);
	printf("������� c: ");
	scanf_s("%i", &c);
	if ((a + b > c) & (a + c > b) & (b + c > a))
		printf("������������� ������");
	else
		printf("������������� �� �������");
	return 0;
}