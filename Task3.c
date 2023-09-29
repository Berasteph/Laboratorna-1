#include <stdio.h>
#include <math.h>

int main() {
    double h, g;
    double t;

    printf("Введіть висоту (в метрах): ");
    scanf("%lf", &h);

    g = 9.81;

    t = sqrt((2 * h) / g);

    printf("Час падіння: %.2lf секунд\n", t);

    return 0;
}