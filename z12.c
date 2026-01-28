#include <stdio.h>
#include <stdlib.h>

int main() {
 int n;
int c;
 int i = 0;
 int binary[32]; // Массив для хранения битов
  printf("Введи отрицательное целое число:\n");
  scanf("%d", &n); // Запишем 8-ми битовое число в десятичной системе счисления
 
  for(i=0; i<32;i++) {
    binary[i] = abs(n) % 2; // Сохраняем остаток
    n = abs(n) / 2;        // Делим число
    
    }

    // Обратный код
  for (i = 0; i < 32; i++)
    if (binary[i]==0) binary[i]=1;
    else              binary[i]=0;

    // +1
 for (i = 0; i < 32; i++)
    if (binary[i]==0) {binary[i]=1;
                       break;}
    else              binary[i]=0;
    
    // 1 в s
    binary[31]=1;

    // Вывод в обратном порядке
  for (int j = 32 - 1; j >= 0; j--) {
    printf("%d", binary[j]);
    }

    return 0; 
}

