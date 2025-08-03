#include <stdio.h>
#include <ctype.h>
 
int main() {
    char c;
    scanf("%c", &c);
 
    if (isdigit(c)) {
        printf("number\n");
    } else if (islower(c)) {
        printf("lowercase\n");
    } else if (isupper(c)) {
        printf("uppercase\n");
    } else {
        printf("error\n");
    }

	return 0;
}
