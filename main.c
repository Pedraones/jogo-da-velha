#include <stdio.h>

typedef struct link{
    char item;
    struct link *prox;
} Link;

Link *acessa(Link *p, int i) {
    while( i > 0 && p!=NULL) {
        p = p->prox;
        i--;
    }
    return p;
} 

void insere(Link **inicio, char letra){
    Link *aloca = (Link *)malloc(sizeof(Link));
    
    aloca->item = letra; 
    aloca->prox = *inicio;
    *inicio = aloca; 
}

void remover(Link *elemento, Link *proximo){
    *elemento = *proximo;
    
    printf("Na funcao remover: %c \n", elemento->item);
    free(proximo);
}

int main(void) {
    Link *inicio;
    Link *q, *p;

    insere(&inicio, 'b');
    insere(&inicio, 'c');
    insere(&inicio, 'a');

    q = acessa(inicio,1);
    p = acessa(inicio,2);
    printf("Antes da funcao remover: %c \n", q->item);
    
    //ordem: 0=a, 1 = c, 2 = b

    remover(q, p);
    
    q = acessa(inicio,2);
    
    printf("Depois da funcao remover: %c \n", q->item);
    return 0;
} 