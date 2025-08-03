#include <stdio.h>
 
int main() {
    char c;
    scanf("%c", &c);
 
    if ('a' <= c && c <= 'z') {
        printf("%c", c - 'a' + 'A');
    } else if ('A' <= c && c <= 'Z') {
        printf("%c", c - 'A' + 'a');
    } else {
        printf("error\n");
    }
	
	return 0;
}
