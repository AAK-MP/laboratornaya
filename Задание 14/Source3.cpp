#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
    setlocale(LC_ALL, "Russian");
    int N, k, i;
    printf("������� N:");
    scanf_s("%i", &N);
    k = 0;
    i = 0;
    while (i < N) {
        k++;
        i = i + k;
    }
    printf("���������� �� ����� ����� K: %i\n", k);
    printf("����� ����� �����: %i\n", i);
    return 0;
}