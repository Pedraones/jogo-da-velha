#include <stdio.h>

//x => valor a ser procurado
//width => tamanho do vetor

void BuscaBinaria(int x, int L[], int width){
    int IInicial = 0;
    int IUltimo = width-1;
    
    while(IInicial <= IUltimo){
        int Meio = (IInicial + IUltimo) / 2;
        if(x == L[Meio]) return printf("X foi encontrado \n");
        if(x < L[Meio]) IInicial = Meio + 1;
        else IUltimo = Meio-1;
    }
    return printf("X nao foi encontrado \n");
}

int main(void) {
    int L[] = {99, 95, 89, 84, 77, 72, 69, 68, 57, 53, 49, 41, 37, 33, 31, 27, 16, 10};
    BuscaBinaria(53, L, 18);
} 