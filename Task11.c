#include <stdio.h>
#include <math.h>

int main() {
    double length, width;
    
    printf("Введіть довжину прямокутника: ");
    scanf("%lf", &length);
    
    printf("Введіть ширину прямокутника: ");
    scanf("%lf", &width);
    
    double perimeter = 2 * (length + width);
    
    double area = length * width;
    
    double diagonal = sqrt(pow(length, 2) + pow(width, 2));
    
    printf("Периметр: %.2lf\n", perimeter);
    printf("Площа: %.2lf\n", area);
    printf("Довжина діагоналі: %.2lf\n", diagonal);
    
    return 0;
}