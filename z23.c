#include <stdio.h>

int main() {
    int c,N=9;
    int matrix[N][N];

    // Заполнение матрицы
    c=N>>1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (((i<=j)&(i<c)&(j<c))|((i+j)<(c*2))) {
                matrix[i][j] = 1; // Заполняем верхний треугольник            
                } else {
                matrix[i][j] = 0; // Заполняем нижний треугольник нулями
            }
        }
    }

    // Вывод матрицы
    for (int i = 0; i <N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
