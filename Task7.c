#include <stdio.h>
#include <math.h>

int main() {
    double radius, height, volume;

    printf("Введіть радіус основи циліндра: ");
    scanf("%lf", &radius);

    printf("Введіть висоту циліндра: ");
    scanf("%lf", &height);

    volume = 3.14159265358979323846 * pow(radius, 2) * height;

    printf("Об'єм циліндра з радіусом %.2lf і висотою %.2lf дорівнює %.2lf\n", radius, height, volume);

    return 0;
}