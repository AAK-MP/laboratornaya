#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	int A, B, C, s1, s2;
	printf("������� A: ");
	scanf_s("%i", &A);
	printf("������� B: ");
	scanf_s("%i", &B);
	printf("������� C: ");
	scanf_s("%i", &C);
	s1 = abs(A - B);
	s2 = abs(A - C);
	if (s1 > s2)
		printf("��������� ����� C, ����������: %i\n", s2);
	else if (s2 > s1)
		printf("��������� ����� B, ����������: %i\n", s1);
	else
		printf("���������� ���������� � �����: %i\n", s2);
	return 0;
}