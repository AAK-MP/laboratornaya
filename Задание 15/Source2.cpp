#include <math.h>
#include<stdio.h>
#include<locale.h> 
int Sign(float x) {
    if (x < 0) {
        return -1;
    }
    if (x == 0) {
        return 0;
    }
    if (x > 0) {
        return 1;
    }
}
int main(void)
{
    setlocale(LC_ALL, "Russian");
    float A, B, s;
    printf("������� ����� A:");
    scanf_s("%f", &A);
    printf("������� ����� B:");
    scanf_s("%f", &B);
    s = Sign(A) + Sign(B);
    printf("�������� ��������� �����: %f\n", s);

    return 0;
}