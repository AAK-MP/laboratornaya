#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	int A, B, C;
	printf("������� A: ");
	scanf_s("%i", &A);
	printf("������� B: ");
	scanf_s("%i", &B);
	printf("������� C: ");
	scanf_s("%i", &C);
	if ((A < B) & (B < C))
		printf("������������� ������");
	else
		printf("������������� �� �������");
	return 0;
}