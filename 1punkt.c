#include <stdio.h>
#include <windows.h> 

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int c = 5, d;
    double a = 5.0, b;

    printf("Введите значение переменной b: ");
    scanf("%lf", &b);

    a = a + b - 2;
    c = c + 1;
    d = c - a + d;
    a = a * c;
    c = c - 1;
    a = a / 10;
    c = c / 2;
    b = b - 1;
    d = d * (c + b + a);

    printf("a = %.2lf\n", a);
    printf("b = %.2lf\n", b);
    printf("c = %d\n", c);
    printf("d = %d\n", d);

    return 0;
}