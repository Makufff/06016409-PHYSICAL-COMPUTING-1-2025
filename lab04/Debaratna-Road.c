#include <stdio.h>
 
int main() {
    double distance;
    scanf("%lf", &distance);
 
    if (distance < 0 || distance > 58.855) {
        printf("InValid\n");
    } else if (distance <= 5.032) {
        printf("Bangkok\n");
    } else if (distance <= 35.477) {
        printf("Samut Prakarn\n");
    } else if (distance <= 52.900) {
        printf("Chachoengsao\n");
    } else { 
        printf("Chon Buri\n");
    }
 
    return 0;
}
