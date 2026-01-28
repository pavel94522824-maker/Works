#include <stdio.h>

int main() {
    int g,N = 3; // Заданный размер матрицы
    int matrix[N][N];

    // Заполнение матрицы (пример: i+j)
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matrix[i][j] =g; 
            g++;
        }
    }

    // Вывод матрицы
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n"); // Перенос строки после завершения столбцов
    }

    return 0;
}
