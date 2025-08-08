#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char text[201];
    scanf("%s", text);

    int len = strlen(text), is_palindrome = 1;
    for (int i = 0; i < len / 2; i++) {
        if (tolower(text[i]) != tolower(text[len - 1 - i])) {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome)
        printf("It is Palindrome.\n");
    else
        printf("It is not Palindrome.\n");

    return 0;
}

