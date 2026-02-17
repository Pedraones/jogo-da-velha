#include <stdio.h>
#include <stdlib.h>

int escolha_quem_comeca(){
    int vez;

    printf("Jogador 1: X, jogador 2: O \nQual jogador ira comecar jogando ? (Indique o numero do jogador)\n");
    scanf("%d", &vez);

    if(vez != 1 && vez != 2) {
        system("clear");
        printf("Digite um jogador valido\n");
        vez = escolha_quem_comeca();
    };
    
    system("clear");
    return vez;
}

int main(){
    char tabuleiro[9] = {'1', '2', '3','4', '5', '6','7', '8', '9'};
    int vez, posicao, rodada;
    
    vez = escolha_quem_comeca();

    for(rodada = 1; rodada<=9;){
        printf("vez: %d \n", vez);
        printf("%c | %c | %c\n%c | %c | %c\n%c | %c | %c\n", tabuleiro[0], tabuleiro[1], tabuleiro[2], tabuleiro[3], tabuleiro[4], tabuleiro[5], tabuleiro[6], tabuleiro[7], tabuleiro[8]);
        
        printf("Insira qual quadrado deseja inserir o O ou X: ");
        scanf("%d", &posicao);

        if(vez == 1) tabuleiro[posicao-1] = 'X';
        if(vez == 2) tabuleiro[posicao-1] = 'O';
        
        rodada++;
        
        system("clear");
        
        if(vez == 1) vez = 2;
        else vez = 1;
    }
    
    return 0;
}