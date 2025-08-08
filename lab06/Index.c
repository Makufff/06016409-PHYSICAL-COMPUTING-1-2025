#include <stdio.h>

int main() {
    int M[] = {2, 20, 8, 10, 4, 6, 16, 18};
    int N[] = {1, 3, 9, 7, 11, 15, 19};
    int input = 0;
    int found_in_M = 0, found_in_N = 0;

    while (input < 1 || input > 20) {
        scanf("%d", &input);
    }

    for (int i = 0; i < 8; i++) {
        if (M[i] == input) {
            printf("%d is in M at index [%d]", input, i);
            found_in_M = 1;
        }
    }

    for (int j = 0; j < 7; j++) {
        if (N[j] == input) {
            printf("%d is in N at index [%d]", input, j);
            found_in_N = 1;
        }
    }

    if (!found_in_M && !found_in_N) {
        printf("%d is not in neither M nor N", input);
    }

    return 0;
}

