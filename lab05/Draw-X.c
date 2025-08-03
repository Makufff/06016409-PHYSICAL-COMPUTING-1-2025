#include <stdio.h>

int main() {
    int n; scanf("%d / 2", &n);
    n /= 2;

    for (int i = -n; i <= n; i++) {
        for (int j = -n; j <= n; j++) {
            if (i == j || i == -j)
                printf("-");
            else
                printf("#");
        }
        printf("\n");
    }

    return 0;
}

