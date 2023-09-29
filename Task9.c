#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    
    printf("Введіть довжину першої сторони трикутника: ");
    scanf("%lf", &a);
    
    printf("Введіть довжину другої сторони трикутника: ");
    scanf("%lf", &b);
    
    printf("Введіть довжину третьої сторони трикутника: ");
    scanf("%lf", &c);
    
    if (a <= 0 || b <= 0 || c <= 0 || (a + b <= c) || (a + c <= b) || (b + c <= a)) {
        printf("Такий трикутник не існує. Спробуйте інші значення сторін.\n");
        return 1;
    }
    
    double s = (a + b + c) / 2;
    
    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    
    printf("Площа трикутника дорівнює: %lf\n", area);
    
    return 0;
}