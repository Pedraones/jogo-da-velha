#include <stdio.h>

//x => valor a ser procurado
//width => tamanho do vetor

void posicao(int x, int L[], int width){
    L[width-1] = x;
    int i = 0;
    while(L[i] != x){
        i++;
    }
    if(L[i] == x && i < width-1) printf("X pertence ao vetor \n");
    else printf("X nao pertence ao vetor \n");
}

int main(void) {
    int L[3] = {5,1};
    posicao(5, L, 3);
} 