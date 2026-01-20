#include <stdio.h>
#include "operations.c"

//n1 quem e multiplicado
//n2 quem multiplica
void chamada(int n1, int n2){
    printf("multi(%d, %d) \n", n1, n2);
}

void devolve(int r){
    printf("%d \n", r);
}

int multi(unsigned int n1, unsigned int n2) {
    int r;
    chamada(n1, n2);
    if( n2== 0 ) {
        return 0;
    }
    else {
        r = n1 + multi(n1, n2-1);
        devolve(r);
    }
    return r;
} 

int main(){
    printf("resultado: %d",multi(5, 4));
}