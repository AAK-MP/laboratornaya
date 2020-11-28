#include <math.h>
#include<stdio.h>
#include<locale.h> 
void PowerA3(float A, float* B)
{
    *B = A * A * A;
}
int main(void)
{
    setlocale(LC_ALL, "Russian");
    int i;
    float A, B;
    for (i = 1; i <= 5; i++) {
        printf("Ââåäèòå ÷èñëî:");
        scanf_s("%f", &A);
        PowerA3(A, &B);
        printf("×èñëî â òðåòüåé ñòåïåíè ðàâíî: %f\n", B);
    }
    return 0;
}
