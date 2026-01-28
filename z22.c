#include <stdio.h>

int main() {
    int N=5;
    int matrix[N]; 

    // Задаем элементы
    for (int i = 0; i < N; i++) {
        scanf("%d", &matrix[N]);
    }

    // Вывод массива в обратном порядке
    for (int i = N - 1; i >= 0; i--) {
        printf("%d ", matrix[N]);
    }

    return 0;
}
