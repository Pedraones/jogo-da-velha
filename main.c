#include <stdio.h>
#include <stdlib.h>

typedef struct link{
    char item;
    struct link *prox;
} *Link;

Link acessa(Link p, int i) {
    while( i > 0 && p!=NULL) {
        p = p->prox;
        i--;
    }
    return p;
} 

void insere(Link *inicio, char letra){
    Link aloca = malloc(sizeof(Link));
    
    aloca->item = letra;
    aloca->prox = *inicio;
    *inicio = aloca;
    
}

void remover(Link *elemento){
    Link p = *elemento;
    *elemento = p->prox;
    free(p);
}

int main(void) {
    Link inicio;

    insere(&inicio, 'b');
    insere(&inicio, 'c');
    
    Link p = acessa(inicio,1);
    insere(&p->prox, '*'); 

    Link q = acessa(inicio,2);

    printf("%c \n", q->item);

    remover(&q);

    q = acessa(inicio,2);
    
    printf("%c \n", q->item);

    return 0;
} 