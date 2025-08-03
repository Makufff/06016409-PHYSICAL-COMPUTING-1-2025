#include <stdio.h>
 
int main() {
    double d;
    scanf("%lf", &d);
 
    if (d > 100 || d < 0) {
        printf("Out of Range\n");
    } else {
        if (d >= 80) {
            printf("A\n");
        } else if (d >= 70) {
            printf("B\n");
        } else if (d >= 60) {
            printf("C\n");
        } else if (d >= 50) {
            printf("D\n");
        } else {
            printf("F\n");
        }
    }
	return 0;
}
