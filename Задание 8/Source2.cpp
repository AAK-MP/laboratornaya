#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	int A, B, c;
	printf("������� ������ ������� A: ");
	scanf_s("%i", &A);
	printf("������� ������ ������� B: ");
	scanf_s("%i", &B);
	c = A / B;
	printf("���������� �������� ����� %i\n", c);
	return 0;
}