#include <stdio.h>

int main() {
    int num, first2, last3;
    scanf("%d", &num);
    printf("%03d%02d\n", num%1000 , num/1000);
    return 0;
}

