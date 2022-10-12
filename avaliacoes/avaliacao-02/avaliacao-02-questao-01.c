#include <stdio.h>

//No comando for há três expressões que definem como o laço executa. São: a inicialização da variável de
//controle, o teste realizado com a variável de controle e alteração que é feita na variável de controle.
//Escreva um programa em C onde é mostrado os valores de inteiros pares e múltiplos de 5.

int main() {
  int i;
  
  for (i = 0; i <=100; i++)
  if((i % 5 == 0) && (i % 2 ==0) ) {
    printf("%d\n", i);
  }
  
  return 0;
}

