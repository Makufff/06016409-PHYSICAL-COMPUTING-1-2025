#include <stdio.h>
#include <ctype.h>

int chk(char x[], char y[]){
    int n_x = 0, n_y = 0;
    for (int i = 0; x[i] != '\0'; i++) n_x++;
    for (int i = 0; y[i] != '\0'; i++) n_y++;
    if (n_x != n_y) return 0;
    for (int i = 0; i < n_x; i++) if (tolower(x[i]) != tolower(y[i])) return 0;
    return 1;
}

void inv(char x[]){
    for (int i = 0; x[i] != '\0'; i++){
        if (islower(x[i])) x[i] = toupper(x[i]);
        else x[i] = tolower(x[i]);
    }
}

int main()
{
    char x[101]; scanf(" %[^\n]", x);
    char y[101]; scanf(" %[^\n]", y);

    inv(x); inv(y);

    printf("*** Results ***\n");
    printf("%s\n", x);
    printf("%s\n", y);
    printf("***************\n");
    printf("Both strings are%sthe same.", chk(x,y) ? " " : " not ");

    return 0;
}
