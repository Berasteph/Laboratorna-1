#include <stdio.h>

int main() {
    float length;
    printf("Введіть довжину ребра куба: ");
    scanf("%f", &length);

    float volume = length * length * length;
    printf("Об'єм куба: %.2f\n", volume);

    float surface_area = 4 * length * length;
    printf("Площа бічної поверхні куба: %.2f\n", surface_area);

    return 0;
}