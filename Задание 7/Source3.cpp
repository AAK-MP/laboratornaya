#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	float A, X, Y, s, n;
	printf("������� ��� ������ � ������ ������ � ��: ");
	scanf_s("%f", &X);
	printf("������� ��������� ������ � ������ ������: ");
	scanf_s("%f", &A);
	printf("������� ��� ������� ������ ������ � ��: ");
	scanf_s("%f", &Y);
	n = A / X;
	s = n + Y * n;
	printf("��������� ����������: %f\n", s);
	return 0;
}