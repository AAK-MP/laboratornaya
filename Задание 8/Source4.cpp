#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	int A, c;
	printf("������� ����������� �����: ");
	scanf_s("%i", &A);
	c = (A / 10) + (A % 10) * 10;
	printf("���������� ����� %i\n", c);
	return 0;
}