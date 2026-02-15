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

void remover(Link **elemento){
    Link *copia;
    copia = *elemento; //*ser_exluido e o elemento que ser remover
    Link *ser_excluido;
    ser_excluido = &*copia;
    *copia = *ser_excluido->prox;
    
    printf("Na funcao remover: %c \n", ser_excluido->item);
    free(ser_excluido);
}

int main(void) {
    Link *inicio;

    insere(&inicio, 'b');
    insere(&inicio, 'c');
    insere(&inicio, 'a');

    Link *q;
    q = acessa(inicio,2);
    printf("Antes da funcao remover: %c \n", q->item);
    
    //ordem: 0=a, 1 = c, 2 = b

    remover(&q);
    
    q = acessa(inicio,2);
    
    printf("Depois da funcao remover: %c \n", q->item);
    return 0;
} 