#include <stdio.h>

int main() {
    double M[3][3] = {0}, N[3][3] = {0}, Result[3][3] = {0};

    for (int row = 0; row < 3; row++) scanf("%lf %lf %lf", &M[row][0], &M[row][1], &M[row][2]);

    for (int row = 0; row < 3; row++) scanf("%lf %lf %lf", &N[row][0], &N[row][1], &N[row][2]);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            double dot = 0;
            for (int k = 0; k < 3; k++) {
                dot += M[i][k] * N[k][j];
            }
            Result[i][j] = dot;
        }
    }

    printf("A x B\n");
    for (int i = 0; i < 3; i++) printf("%.2lf %.2lf %.2lf\n", Result[i][0], Result[i][1], Result[i][2]);

    return 0;
}

