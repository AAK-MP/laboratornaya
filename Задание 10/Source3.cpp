#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	int A;
	printf("������� �����: ");
	scanf_s("%i", &A);
	if ((A % 2 == 0) & (A > 9) & (A < 100))
		printf("������������� ������");
	else
		printf("������������� �� �������");
	return 0;
}