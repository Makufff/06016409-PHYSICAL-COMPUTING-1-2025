#include <stdio.h>

int main() {
    char text[301], target, target_lower;
    int positions[301], count = 0;

    scanf("%[^\n]", text);
    scanf(" %c", &target);

    target_lower = (target >= 'A' && target <= 'Z') ? target + 32 : target;

    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] >= 'A' && text[i] <= 'Z') {
            text[i] += 32;
        }
        if (text[i] == target_lower) {
            positions[count++] = i;
        }
    }

    if (count > 0) {
        printf("There is/are %d \"%c\" in the above sentences.\n", count, target);
        printf("Position: ");
        for (int i = 0; i < count; i++) {
            printf("%d", positions[i] + 1);
            if (i != count - 1) printf(", ");
        }
    } else {
        printf("Not found.");
    }

    return 0;
}

