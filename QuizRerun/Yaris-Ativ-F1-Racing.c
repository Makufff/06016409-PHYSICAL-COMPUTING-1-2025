#include <stdio.h>

int main() {
    int save, n, n_save, count = 0;
    float d;

    scanf("%d %f %d %d", &save, &d, &n, &n_save);

    count += (save == 0);
    count += (n <= 2);
    count += (d >= 1.0f);
    count += ((n - n_save) <= 1);

    if (count == 0)
        printf("DRS allowed");
    else
        printf("DRS not allowed %d", count);

    return 0;
}

