#include <math.h>
#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	float s, AC, BC, A, B, C;
	printf("������� ���������� ����� A:");
	scanf_s("%f", &A);
	printf("������� ���������� ����� B:");
	scanf_s("%f", &B);
	printf("������� ���������� ����� C:");
	scanf_s("%f", &C);
	AC = abs(A - B);
	BC = abs(B - C);
	s = AC + BC;
	printf("����� ������� AC �����: %f\n", AC);
	printf("����� ������� BC �����: %f\n", BC);
	printf("����� �������� AC � BC �����: %f\n", s);
	return 0;
}