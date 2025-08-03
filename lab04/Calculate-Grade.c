#include <stdio.h>
 
int main() {
    char infos[40];
    scanf("%[^\n]s", infos);
 
    float a, b, c, d, e, f;
    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);
    float gpa = (a + b + c + d + e + f) / 6.0;
 
    printf("Grade announcement 1/2568: %s\n", infos);
    printf("GPS/GPA: %.2f\n", gpa);
	
	return 0;
}
