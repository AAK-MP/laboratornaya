#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	int A, B;
	printf("������� A: ");
	scanf_s("%i", &A);
	printf("������� B: ");
	scanf_s("%i", &B);
	if ((A > 2) & (B <= 3))
		printf("������������� ������");
	else
		printf("������������� �� �������");
	return 0;
}