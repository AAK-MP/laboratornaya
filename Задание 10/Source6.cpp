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
	if ((a * a == b * b + c * c) | (b * b == c * c + a * a) | (c * c == a * a + b * b))
		printf("������������� ������");
	else
		printf("������������� �� �������");
	return 0;
}