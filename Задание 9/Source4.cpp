#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	int A, B, C, S, k;
	printf("������� A: ");
	scanf_s("%i", &A);
	printf("������� B: ");
	scanf_s("%i", &B);
	printf("������� C: ");
	scanf_s("%i", &C);
	k = (A / C) * (B / C);
	S = A * B - k * C * C;
	printf("���������� ��������� �����: %i\n", k);
	printf("������� ���������� ����� �����: %i\n", S);
	return 0;
}