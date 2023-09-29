#include <stdio.h>
#include <math.h>

int main() {
    double d;
    printf("Введіть довжину кола: ");
    scanf("%lf", &d);

    double радіус = d / (2 * 3.14159265358979323846);

    double площа = 3.14159265358979323846 * радіус * радіус;

    printf("Площа круга: %lf\n", площа);

    return 0;
}