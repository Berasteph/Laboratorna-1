#include <stdio.h>

int main() {
    double R1, R2, R3, R_total;

    printf("Введіть значення опору R1: ");
    scanf("%lf", &R1);

    printf("Введіть значення опору R2: ");
    scanf("%lf", &R2);

    printf("Введіть значення опору R3: ");
    scanf("%lf", &R3);

    R_total = 1 / ((1 / R1) + (1 / R2) + (1 / R3));

    printf("Загальний опір з'єднання: %.2lf Ом\n", R_total);

    return 0;
}