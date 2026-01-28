#include <stdio.h>

int main() {
 int n,g;
 unsigned int c;
 printf("Введи положительно целое число:\n");
 scanf("%d", &n);
 printf("Введи новое значение байта(0-255)\n");
 scanf("%d", &g);
c = (n & 0xFF00FFFF) | ((g & 0xFF) << 16);

 printf("%u\n",c);

   return 0; 
}

