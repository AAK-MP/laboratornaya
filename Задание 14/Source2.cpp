#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
    setlocale(LC_ALL, "Russian");
    int A, B, i, k;
    printf("������� A:");
    scanf_s("%i", &A);
    printf("������� B:");
    scanf_s("%i", &B);
    i = A;
    while (i >= 0) {
        i -= B;
        k = i + B;
    }
    printf("������ ��������� ����� �����: %i\n", k);
    return 0;
}