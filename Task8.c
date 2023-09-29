#include <stdio.h>

int main() {
    double V0, t, a, S;

    printf("Введіть початкову швидкість (V0): ");
    scanf("%lf", &V0);

    printf("Введіть час (t): ");
    scanf("%lf", &t);

    printf("Введіть прискорення (a): ");
    scanf("%lf", &a);

    S = V0 * t + 0.5 * a * t * t;

    printf("Відстань, пройдена тілом: %lf\n", S);

    return 0;
}