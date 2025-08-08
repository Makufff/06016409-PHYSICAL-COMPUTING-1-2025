#include <stdio.h>

int main() {
    char n;
    scanf("%c", &n);

    if (n >= 'A' && n <= 'Z')
        printf("%c", n + ('a' - 'A'));
    else if (n >= 'a' && n <= 'z')
        printf("%c", n - ('a' - 'A'));
    else
        printf("error");

    return 0;
}

