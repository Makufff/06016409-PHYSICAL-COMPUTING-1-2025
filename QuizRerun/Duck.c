#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n < 0)
        printf("Error");
    else if (n == 0)
        printf("Duck Type: Silent Duck");
    else if (n <= 10)
        printf("Duck Type: Chill Duck");
    else if (n <= 50)
        printf("Duck Type: Happy Duck");
    else
        printf("Duck Type: Talkative Duck");

    return 0;
}

