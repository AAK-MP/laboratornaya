#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	float s, k;
	printf("������� ����: ");
	scanf_s("%f", &s);
	for (k = 0.1; k < 1.1; k += 0.1)
		printf("%f �� = %f \n ", k, s * k);
	return 0;
}