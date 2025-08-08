#include <stdio.h>

int main() {
    int s, e, sum = 0;
    scanf("%d %d", &s, &e);

    printf("pass : ");

    if (s <= e) {
        for (int i = s; i <= e; i++) {
            if (i % 2 == 0) {
                printf("%d ", i);
                sum += i;
            }
        }
    } else {
        for (int i = s; i >= e; i--) {
            if (i % 2 == 0) {
                printf("%d ", i);
                sum += i;
            }
        }
    }

    printf("\nSum : %d", sum);
    return 0;
}

