#include <math.h>
#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	float A, B, C;
	printf("������� �������� ���������� A: ");
	scanf_s("%f", &A);
	printf("������� �������� ���������� B: ");
	scanf_s("%f", &B);
	C = A;
	A = B;
	B = C;
	printf("���������� A �����: %f\n", A);
	printf("���������� B �����: %f\n", B);
	return 0;
}