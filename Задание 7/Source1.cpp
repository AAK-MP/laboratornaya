#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	float p, A, R;
	printf("������� �������� ���� ����� � �������� (0 < � < 360): ");
	scanf_s("%f", &A);
	p = 3.14;
	R = p * A / 180;
	printf("���� ����� � �������� �����: %f\n", R);
	return 0;
}