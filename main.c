#include <stdio.h>
#include <string.h>

void main(){
    int num1 = 2;
    int num2 = 0;

    //!variavel = se variavel igual a false
    if(!num1) printf("num1 = 0 \n");
    else printf("num1 > 0 \n");

    //&& as 2 condicoes devem ser verdadeiras para retornar true
    if(!num1 && !num2) printf("as 2 variaveis sao falsas, = 0 \n");
    else printf("1 ou nenhuma variavel sao nulas \n");

    //|| uma das 2 condicoes devem ser verdadeiras para retornar true
    if(!num1 || !num2) printf("alguma ou as 2 variaveis sao falsas, = 0");
    else printf("nenhuma das variaveis sao falsas, = 0");
}