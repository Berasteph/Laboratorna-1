#include <stdio.h>

int main() {
    double a, b, c;
    
    printf("Введіть значення a, b і c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    
    double x_vertex = -b / (2 * a);
    double y_vertex = c - (b * b) / (4 * a);
    
    printf("Координати вершини параболи: (%lf, %lf)\n", x_vertex, y_vertex);
    
    return 0;
}
