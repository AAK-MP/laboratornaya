#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	int K, N, c;
	printf("������� ���� ����: ");
	scanf_s("%i", &K);
	printf("������� ����� ��� ������ 1 ������: ");
	scanf_s("%i", &N);
	c = ((K + N - 2) % 7) + 1;
	printf("����� ��� ������: %i\n", c);
	return 0;
}