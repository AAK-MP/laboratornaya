#include <math.h>
#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	float A, B, C;
	printf("������� �������� ���������� A: ");
	scanf_s("%f", &A);
	B = A * A; //������ �������
	C = B * A; //������ �������
	B = B * C; //����� �������
	C = B * B; //������� �������
	A = C * B; //����������� �������
	printf("A � ������� 15 �����: %f\n", A);
	return 0;
}