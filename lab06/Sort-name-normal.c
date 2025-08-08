#include <stdio.h>

int cmp(char name1[61], char name2[61]) {
    int i = 0;
    while (name1[i] != '\0' && name2[i] != '\0') {
        if (name1[i] < name2[i]) return 1;
        if (name1[i] > name2[i]) return 0;
        i++;
    }
    return name1[i] == '\0' && name2[i] != '\0';
}

void swap(char a[61], char b[61]) {
    char temp[61];
    for (int i = 0; i < 61; i++) {
        temp[i] = a[i];
        a[i] = b[i];
        b[i] = temp[i];
    }
}

int main() {
    char names[20][61];

    for (int i = 0; i < 20; i++) {
        scanf(" %[^\n]", names[i]);
        for (int j = 0; names[i][j] != '\0'; j++) {
            if (names[i][j] >= 'A' && names[i][j] <= 'Z') {
                names[i][j] += 32;
            }
        }
    }

    // Sort
    for (int i = 0; i < 19; i++) {
        for (int j = 0; j < 19 - i; j++) {
            if (!cmp(names[j], names[j + 1])) {
                swap(names[j], names[j + 1]);
            }
        }
    }
	
	// Capitalize
    for (int i = 0; i < 20; i++) {
        int capitalize = 1;
        for (int j = 0; names[i][j] != '\0'; j++) {
            if (capitalize && names[i][j] >= 'a' && names[i][j] <= 'z') {
                printf("%c", names[i][j] - 32);
                capitalize = 0;
            } else {
                printf("%c", names[i][j]);
                capitalize = (names[i][j] == ' ');
            }
        }
        printf("\n");
    }

    return 0;
}

