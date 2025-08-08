#include <stdio.h>

int main() {
    char a[10], b[10];
    int x = 0, y = 0, i = 1;

    scanf("%s", a);
    scanf("%s", b);

    while (a[i] >= '0' && a[i] <= '9') {
        x = x * 10 + (a[i] - '0');
        i++;
    }

    i = 1;
    
	while (b[i] >= '0' && b[i] <= '9') {
        y = y * 10 + (b[i] - '0');
        i++;
    }

    int diff = x - y;
    if (diff < 0) diff = -diff;

    int result = 1;
    for (int j = 0; j < diff; j++) {
        result *= 2;
    }

    printf("%d\n", result);
    return 0;
}

