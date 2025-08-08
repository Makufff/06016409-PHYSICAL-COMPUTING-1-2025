#include <stdio.h>

int main() {
    char seq[201];
    char text[] = "aiwgzvfuthsojlkdecnmrqpyxb";
    scanf("%[^\n]", seq);

    for (int i = 0; seq[i] != '\0'; i++) {
        if (seq[i] == ' ') {
            printf(" ");
            continue;
        }

        char choose = seq[i], consider = seq[i];
        int index = -1;

        consider += (consider >= 'A' && consider <= 'Z') ? 32 : 0;

        for (int j = 0; j < 26; j++) {
            if (text[j] == consider) {
                index = j - 5;
                if (index < 0) index += 26;
                break;
            }
        }

        if (index == -1) continue;

        if (choose >= 'A' && choose <= 'Z') {
            printf("%c", text[index] - 32);
        } else {
            printf("%c", text[index]);
        }
    }

    return 0;
}

