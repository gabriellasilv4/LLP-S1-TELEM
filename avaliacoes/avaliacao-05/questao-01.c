#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 1000

//Cria um programa que receba dados via teclado e grave em um arquivo.

int main()
{
    char texto[TAMANHO];
    FILE* fp;

    printf("Digite o texto que deseja gravar neste arquivo.\n");
    fgets(texto, TAMANHO, stdin);

    if((fp = fopen("arquivo.txt", "w"))==NULL)
    {
        printf("O arquivo não pode ser aberto.\n");
        exit(1);
    }

    fputs(texto, fp);
    fclose(fp);

    return 0;
}
