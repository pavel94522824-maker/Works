#include <stdio.h>

int main() {
    int n = 5; // Размер матрицы
    printf("Введи размерность таблицы:\n");
    scanf("%d", &n);
    int a[n][n];
    int val = 1;
    int t = 0, b = n - 1, l = 0, r = n - 1;

    while (val <= n * n) {
        for (int i = l; i <= r; i++)
         a[t][i] = val++; // Вправо
        t++;
        for (int i = t; i <= b; i++)
         a[i][r] = val++; // Вниз
        r--;
        for (int i = r; i >= l; i--)
         a[b][i] = val++; // Влево
        b--;
        for (int i = b; i >= t; i--)
         a[i][l] = val++; // Вверх
        l++;
    }

    // Вывод
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) printf("%3d ", a[i][j]);
        printf("\n");
    }
    return 0;
}
