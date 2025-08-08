#include <stdio.h>

int main() {
    char input[201];
    char cipher[] = "aiwgzvfuthsojlkdecnmrqpyxb";
    scanf("%[^\n]", input);

    for (int i = 0; input[i] != '\0'; i++) {
        char ch = input[i];

        if (ch == ' ') {
            printf(" ");
            continue;
        }

        char lower = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;
        int index = -1;

        for (int j = 0; j < 26; j++) {
            if (cipher[j] == lower) {
                index = (j + 5) % 26;
                break;
            }
        }

        if (index == -1) continue;

        char encoded = cipher[index];
        if (ch >= 'A' && ch <= 'Z') encoded -= 32;

        printf("%c", encoded);
    }

    return 0;
}

