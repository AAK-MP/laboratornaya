#include <math.h>
#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	float A, B, C, D;
	printf("������� �������� ���������� A: ");
	scanf_s("%f", &A);
	printf("������� �������� ���������� B: ");
	scanf_s("%f", &B);
	printf("������� �������� ���������� C: ");
	scanf_s("%f", &C);
	D = A;
	A = B;
	B = C;
	C = D;
	printf("���������� A �����: %f\n", A);
	printf("���������� B �����: %f\n", B);
	printf("���������� C �����: %f\n", C);
	return 0;
}