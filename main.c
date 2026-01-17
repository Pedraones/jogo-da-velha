#include <stdio.h>
#include <string.h>

int countStatic(void){
    static int num = 0;
    return num++;
}

int countVariable(void){
    int num = 0;
    return num++;
}

void main(){
    printf("Funcao com variavel static: ");
    for(int i = 0; i <= 5; i++) printf("%d", countStatic());
    printf("\n");
    printf("Funcao com variavel nao static: ");
    for(int i = 0; i <= 5; i++) printf("%d", countVariable());
}