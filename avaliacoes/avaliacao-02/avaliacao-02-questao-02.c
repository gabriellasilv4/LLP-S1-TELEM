#include <stdio.h>

//Use um laço while para imprimir números pares múltiplos de 4. Use uma variável de controle onde seu
//incremento é de uma unidade. Quando a variável for testada e não for múltiplo de 4 use o continue. Caso
//contrário imprima o número.

int main() {
  int i = 0;
  
  while (i < 100) {
    if (i % 4) {
      i++;
      continue;
    }
    printf("%d\n", i);
    i++;
  } 
  
  return 0;
}