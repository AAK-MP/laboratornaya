#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	float a, b, s, n, k, l;
	printf("������� ������ ��������� �����: ");
	scanf_s("%f", &a);
	printf("������� ������ ��������� �����: ");
	scanf_s("%f", &b);
	s = a * a + b * b;
	n = a * a - b * b;
	k = a * a * b * b;
	l = (a * a) / (b * b);
	printf("����� ��������� �����: %f\n", s);
	printf("�������� ��������� �����: %f\n", n);
	printf("������������ ��������� �����: %f\n", k);
	printf("������� ��������� �����: %f\n", l);
	return 0;
}
