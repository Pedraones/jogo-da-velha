#include <stdio.h>
#include "operations.c"

//n1 quem e multiplicado
//n2 quem multiplica
void chamada(int n1, int n2){
    printf("multi(%d, %d) \n", n1, n2);
}

int multi(unsigned int n1, unsigned int n2) {
    chamada(n1, n2);
    if( n2==1 ) return n1;
    return n1 + multi(n1, n2-1);
} 

int main(){
    printf("resultado: %d",multi(3, 2));
}