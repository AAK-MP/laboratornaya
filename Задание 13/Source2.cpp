#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
    setlocale(LC_ALL, "Russian");
    float N, k, i;
    printf("������� N: ");
    scanf_s("%f", &N);
    k = 1;
    for (i = 0; i <= N; i++)
        k *= 1 + i / 10;
    printf("������������ ����� %f \n ", k);
    return 0;
}