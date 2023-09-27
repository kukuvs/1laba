#include <stdio.h>

int main(void) {
    double a = 5;
    double b, c = 5;
    int d;

    printf("Введите значение b: ");
    scanf("%lf", &b);
    printf("Введите значение d: ");
    scanf("%d", &d);

    a = a + b - 2;
    c = c + 1;
    d = c - a + d;

    printf("a=%lf, b=%lf, c=%lf, d=%d\n", a, b, c, d);

    a = a * c;
    c = c - 1;

    printf("a=%lf, b=%lf, c=%lf, d=%d\n", a, b, c, d);

    a = a / 10;
    c = c / 2;
    b = b - 1;
    d = d * (c + b + a);

    printf("a=%lf, b=%lf, c=%lf, d=%d\n", a, b, c, d);

    return 0;
}
