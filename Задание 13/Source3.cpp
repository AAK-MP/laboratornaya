#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
    setlocale(LC_ALL, "Russian");
    int N, i, k;
    printf("������� N:");
    scanf_s("%i", &N);
    k = 0;
    for (i = 1; i <= (2 * N - 1); i += 2) {
        k += i;
        printf("�������� ���� ����� ����� �� 1 �� N: %i \n ", k);
    }
    return 0;
}