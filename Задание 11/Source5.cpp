#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	int x;
	printf("������� x: ");
	scanf_s("%i", &x);
	if (x == 0)
		printf("������� �����");
	else {
		if (x > 0)
			printf("������������� ");
		else printf("������������� ");
		if (x % 2 == 0)
			printf("������ �����");
		else printf("�������� �����");
	}
	return 0;
}