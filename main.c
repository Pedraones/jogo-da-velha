#include <stdio.h>
#include <stdlib.h>

typedef struct link{
    char item;
    struct link *prox;
} *Link;

void insere(Link *inicio, char letra){
    Link aloca = malloc(sizeof(Link));
    
    aloca->item = letra;
    aloca->prox = *inicio;
    *inicio = aloca;
    
}

int main(void) {
    Link inicio;    

    insere(&inicio, 'b');
    insere(&inicio, 'c');

    printf("%p \n", inicio->prox);

    return 0;
} 