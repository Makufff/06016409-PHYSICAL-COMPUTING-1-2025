#include <stdio.h>

int main() {
    char text[101] ; scanf("%[^\n]", text);

    int len = 0;
    while (text[len] != '\0') len++;
    for (int i = len - 1; i >= 0; i--) printf("%c", text[i]);
    return 0;
}

