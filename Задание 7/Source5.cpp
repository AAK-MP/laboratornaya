#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	float A, B, x;
	printf("������� �������� ���������� A, �� ������ 0: ");
	scanf_s("%f", &A);
	printf("������� �������� ���������� B: ");
	scanf_s("%f", &B);
	x = -B / A;
	printf("��������� �����: %f\n", x);
	return 0;
}