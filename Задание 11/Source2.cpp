#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	int A, B, C, s;
	printf("������� A: ");
	scanf_s("%i", &A);
	printf("������� B: ");
	scanf_s("%i", &B);
	printf("������� C: ");
	scanf_s("%i", &C);
	if ((A > C) & (B > C))
		s = A + B;
	else if ((A > B) & (C > B))
		s = A + C;
	else
		s = B + C;
	printf("����� �����: %i", s);
	return 0;
}