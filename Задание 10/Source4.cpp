#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	int A, a, b, c;
	printf("������� ����������� �����: ");
	scanf_s("%i", &A);
	a = A / 100;
	b = A % 100 / 10;
	c = A % 10;
	if (((a > b) & (b > c)) | ((a < b) & (b < c)))
		printf("������������� ������");
	else
		printf("������������� �� �������");
	return 0;
}