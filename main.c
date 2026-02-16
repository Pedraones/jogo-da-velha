#include <stdio.h>
#include <stdlib.h>

int escolha(){
    int vez;

    printf("Jogador 1: X, jogador 2: O \nQual jogador ira comecar jogando ? (Indique o numero do jogador)\n");
    scanf("%d", &vez);

    if(vez != 1 && vez != 2) {
        system("clear");
        printf("Digite um jogador valido\n");
        vez = escolha();
    };
    
    return vez;
}

int main(){
    char tabuleiro[9] = {'1', '2', '3','4', '5', '6','7', '8', '9'};
    int i, vez;
    
    vez = escolha();

    //printf("%c | %c | %c\n%c | %c | %c\n%c | %c | %c\n", tabuleiro[0], tabuleiro[1], tabuleiro[2], tabuleiro[3], tabuleiro[4], tabuleiro[5], tabuleiro[6], tabuleiro[7], tabuleiro[8]);
    //system("clear");
    
    return 0;
}