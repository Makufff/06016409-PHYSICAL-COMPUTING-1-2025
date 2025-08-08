#include <stdio.h>

int main() {
    double M[3][3];
    for (int i = 0; i < 3; i++) scanf("%lf %lf %lf", &M[i][0], &M[i][1], &M[i][2]);

    double scalar = M[0][0];
    int is_scalar = 1;

    for (int i = 0; i < 3 && is_scalar; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j && M[i][j] != scalar) {
                is_scalar = 0;
            } else if (i != j && M[i][j] != 0) {
                is_scalar = 0;
            }
        }
    }

    printf(is_scalar ? "This is a scalar matrix" : "This is not a scalar matrix");
    return 0;
}

