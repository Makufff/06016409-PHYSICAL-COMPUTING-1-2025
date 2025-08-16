#include <stdio.h>
#include <math.h>

void perimeter(double a, double b)
{
    double c = sqrt(a * a + b * b);
    printf("Perimeter: %.2lf\n", c + b + a);
}

void area(double a, double b)
{
    double c = ( a * b ) / 2;
    printf("Area: %.2lf\n", c);
}

int main()
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    perimeter(a, b);
    area(a, b);
    return 0;
}
