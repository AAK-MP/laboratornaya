#include <math.h>
#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	float A, B;
	printf("������� �������� ���������� A: ");
	scanf_s("%f", &A);
	B = A * A; //������ �������
	A = B * B; //�������� �������
	B = A * A; //������� �������
	printf("A � ������� 8 �����: %f\n", B);
	return 0;
}