#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	float V1, V2, s, T, S;
	printf("������� �������� ������� ���������� � ��/�: ");
	scanf_s("%f", &V1);
	printf("������� �������� ������� ���������� � ��/�: ");
	scanf_s("%f", &V2);
	printf("������� ���������� ����� ������������ � ��: ");
	scanf_s("%f", &s);
	printf("������� ����� � �����: ");
	scanf_s("%f", &T);
	S = s + V1 * T + V2 * T;
	printf("���������� ����� ������������ �����: %f\n", S);
	return 0;
}