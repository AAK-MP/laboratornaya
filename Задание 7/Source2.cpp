#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	float p, A, R;
	printf("������� �������� ���� ����� � �������� (0 < � < 2��): ");
	scanf_s("%f", &A);
	p = 3.14;
	R = 180 * A / p;
	printf("���� ����� � �������� �����: %f\n", R);
	return 0;
}