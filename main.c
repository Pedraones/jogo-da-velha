#include <stdio.h>

//x => valor a ser procurado
//width => tamanho do vetor

void BuscaBinaria(int x, int L[], int width){
    int IInicial = 0;
    int IUltimo = width-1;
    
    
    while(IInicial <= IUltimo){
        int Meio = (IInicial + IUltimo) / 2;
        if(x == L[Meio]) return printf("X foi encontrado \n");
        if(x < L[Meio]) IUltimo = Meio-1;
        else IInicial = Meio + 1;
    }
    return printf("X nao foi encontrado \n");
}

int main(void) {
    int L[] = {10, 16, 27, 31, 33, 37, 41, 49, 53, 57, 68, 69, 72, 77, 84, 89, 95, 99};
    BuscaBinaria(99, L, 18);
} 