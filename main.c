#include <stdio.h>
#include <string.h>

void main(){
    int num1;
    char text[90];

    printf("Digite um numero \n");
    scanf("%d", &num1);

    switch (num1)
    {
    case 1:
        printf("num1 = 1 \n");
        break;
    
    case 2:
        printf("num1 = 2 \n");
        break;

    default:
        printf("num1 != 2 \n");
        break;
    }
}