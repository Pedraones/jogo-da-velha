#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor, tamanho, i;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    vetor = malloc(tamanho*sizeof(int));

    if(vetor == NULL) exit(1);

    free(vetor);
}