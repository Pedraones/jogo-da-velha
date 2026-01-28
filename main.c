#include <stdio.h>

int posicao(int x, int L[], int width){
    for(int i = 0; i < width; i++){
        if(x == L[i]) return i;
    }
    return -1;
}

int main(void) {
    int L[2] = {1,3};
    int verifica = posicao(1, L, 2);
    printf("%d \n", verifica);
    printf("%d \n", L[verifica]);
} 