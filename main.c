#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor, tamanho, i;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    vetor = malloc(tamanho*sizeof(int));

    if(vetor == NULL) exit(1);

    for(i = 0; i < tamanho; i++){
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < tamanho; i++){
        printf("Valor do elemento %d: %d \n", i, vetor[i]);
    }
}