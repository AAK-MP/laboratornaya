#include <math.h> 
#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	float a, b, s, n, k, l;
	printf("������� ������ ����������: ");
	scanf_s("%f", &a);
	printf("������� ������ ����������: ");
	scanf_s("%f", &b);
	float modA = abs(a), modB = abs(b);
	s = modA + modB;
	printf("����� ������� �����: %f\n", s);
	s = modA - modB;
	printf("�������� ������� �����: %f\n", s);
	s = modA * modB;
	printf("������������ ������� �����: %f\n", s);
	s = modA / modB;
	printf("������� ������� �����: %f\n", s);
	return 0;
}