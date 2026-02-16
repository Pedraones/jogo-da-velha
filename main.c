#include <stdio.h>
#include <stdlib.h>

int main(){
    char tabuleiro[9] = {'1', '2', '3','4', '5', '6','7', '8', '9'};
    int i;

    printf("%c | %c | %c\n%c | %c | %c\n%c | %c | %c\n", tabuleiro[0], tabuleiro[1], tabuleiro[2], tabuleiro[3], tabuleiro[4], tabuleiro[5], tabuleiro[6], tabuleiro[7], tabuleiro[8]);
    
    return 0;
}