#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	int K, c;
	printf("������� ����: ");
	scanf_s("%i", &K);
	c = K % 7;
	printf("����� ��� ������: %i\n", c);
	return 0;
}