#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    printf("Введіть довжину сторони 'a': ");
    scanf("%lf", &a);
    printf("Введіть довжину сторони 'b': ");
    scanf("%lf", &b);
    printf("Введіть довжину сторони 'c': ");
    scanf("%lf", &c);

    if (a <= 0 || b <= 0 || c <= 0 || (a + b <= c) || (a + c <= b) || (b + c <= a)) {
        printf("Некоректні значення сторін трикутника.\n");
        return 1;
    }

    double s = (a + b + c) / 2; // Півпериметр
    double area = sqrt(s * (s - a) * (s - b) * (s - c));

    double height = (2 * area) / a;

    printf("Висота трикутника, опущена на сторону 'a', дорівнює %.2lf\n", height);

    return 0;
}