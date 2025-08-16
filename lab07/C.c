#include <stdio.h>
#include <math.h>

#define llf double

void printSqrt(llf x, llf y){
    llf c = sqrt(x * x + y * y);
    printf("sqrt(%.0lf^2+%.0lf^2)=%.2lf", x, y, c);
}

int main(){
    llf x, y;
    scanf("%lf %lf", &x, &y);
    printSqrt(x, y);
    return 0;
}
