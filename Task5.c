    #include <stdio.h>
#include <math.h>

// Структура для представлення точки в двомірному просторі
struct Point {
    double x;
    double y;
};

// Функція для обчислення відстані між двома точками
double distance(struct Point p1, struct Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() {
    struct Point A, B, C;
    
    // Введення координат вершин трикутника
    printf("Введіть координати вершини A (x y): ");
    scanf("%lf %lf", &A.x, &A.y);
    
    printf("Введіть координати вершини B (x y): ");
    scanf("%lf %lf", &B.x, &B.y);
    
    printf("Введіть координати вершини C (x y): ");
    scanf("%lf %lf", &C.x, &C.y);
    
    // Обчислення довжин сторін трикутника
    double AB = distance(A, B);
    double BC = distance(B, C);
    double CA = distance(C, A);
    
    // Обчислення периметра трикутника
    double perimeter = AB + BC + CA;
    
    // Обчислення площі трикутника за формулою Герона
    double s = perimeter / 2; // Півпериметр
    double area = sqrt(s * (s - AB) * (s - BC) * (s - CA));
    
    printf("Периметр трикутника: %.2lf\n", perimeter);
    printf("Площа трикутника: %.2lf\n", area);
    
    return 0;
}