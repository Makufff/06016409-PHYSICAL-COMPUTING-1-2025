#include <stdio.h>
#include <stdbool.h>
 
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
 
    bool is_triangle = (a + b > c) && (a + c > b) && (b + c > a);
 
    if (is_triangle) {
        printf("Triangle is valid.\n");
    } else {
        printf("Triangle is not valid.\n");
    }
 
    return 0;
}
