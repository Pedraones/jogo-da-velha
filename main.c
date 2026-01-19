#include <stdio.h>
#include "operations.c"

//n1 quem e multiplicado
//n2 quem multiplica
int multi(unsigned int n1, int n2) {
    if( n2==1 ) return n1;
    return n1 + multi(n1, n2-1);
} 

int main(){
    printf("%d",multi(3, 2));
}