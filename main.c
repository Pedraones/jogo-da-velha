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

Link acessa(Link p, int i) {
    while( i > 0 && p!=NULL) {
        p = p->prox;
        i--;
    }
    return p;
} 

int main(void) {
    Link inicio;    
    Link teste;

    insere(&inicio, 'b');
    insere(&inicio, 'c');

    teste = acessa(inicio, 1);

    printf("%c \n", teste->item);

    return 0;
} 