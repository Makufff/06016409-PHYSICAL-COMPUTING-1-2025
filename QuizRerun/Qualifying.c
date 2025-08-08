#include <stdio.h>

int main() {
    float s1, s2, s3, min_score;
    char n1[35], n2[35], n3[35], *fastest;

    scanf("%f %[^\n]", &s1, n1);
    scanf("%f %[^\n]", &s2, n2);
    scanf("%f %[^\n]", &s3, n3);

    min_score = s1;
    fastest = n1;

    if (s2 < min_score) {
        min_score = s2;
        fastest = n2;
    }
    if (s3 < min_score) {
        min_score = s3;
        fastest = n3;
    }

    printf("%s is Fastest : %.3f", fastest, min_score);
    return 0;
}

