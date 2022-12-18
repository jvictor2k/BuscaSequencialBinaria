#include<stdio.h>
#include<stdlib.h>
#include "biblio.h"

int main(void)
{
    int vet[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int tam = sizeof(vet) / sizeof(int);
    int buscar;

    printf("\n\nInforme o numero para buscar: ");
    scanf("%i", &buscar);
    
    if(buscaBinaria(tam, vet, buscar) >= 0)
    {
        printf("\nO valor foi encontrado no indice:\n\n");
        printf("%d\n\n", buscaBinaria(tam, vet, buscar));
    }
    else
    {
        printf("\nValor nao encontrado.\n\n");
    }

    return 0;
}