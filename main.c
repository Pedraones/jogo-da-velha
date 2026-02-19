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

int verifica_linhas(char *tabuleiro){
    if(tabuleiro[0] == tabuleiro[1] && tabuleiro[0] == tabuleiro[2]){
        if(tabuleiro[0] == 'X') {
            system("clear");
            printf("Jogador 1 venceu!");
            return 0;
        }
        else {
            system("clear");
            printf("Jogador 2 venceu!");
            return 0;
        }
    }

    if(tabuleiro[3] == tabuleiro[4] && tabuleiro[3] == tabuleiro[5]){
        if(tabuleiro[3] == 'X') {
            system("clear");
            printf("Jogador 1 venceu!");
            return 0;
        }
        else {
            system("clear");
            printf("Jogador 2 venceu!");
            return 0;
        }
    }

    if(tabuleiro[6] == tabuleiro[7] && tabuleiro[6] == tabuleiro[8]){
        if(tabuleiro[6] == 'X') {
            system("clear");
            printf("Jogador 1 venceu!");
            return 0;
        }
        else {
            system("clear");
            printf("Jogador 2 venceu!");
            return 0;
        }
    }

    return 1;
}

int verifica_colunas(char *tabuleiro){
    if(tabuleiro[0] == tabuleiro[3] && tabuleiro[0] == tabuleiro[6]){
            if(tabuleiro[0] == 'X') {
                system("clear");
                printf("Jogador 1 venceu!");
                return 0;
            }
            else {
                system("clear");
                printf("Jogador 2 venceu!");
                return 0;
            }
        }

    if(tabuleiro[1] == tabuleiro[4] && tabuleiro[1] == tabuleiro[7]){
        if(tabuleiro[1] == 'X') {
            system("clear");
            printf("Jogador 1 venceu!");
            return 0;
        }
        else {
            system("clear");
            printf("Jogador 2 venceu!");
            return 0;
        }
    }

    if(tabuleiro[2] == tabuleiro[5] && tabuleiro[2] == tabuleiro[8]){
        if(tabuleiro[2] == 'X') {
            system("clear");
            printf("Jogador 1 venceu!");
            return 0;
        }
        else {
            system("clear");
            printf("Jogador 2 venceu!");
            return 0;
        }
    }

    return 1;
}

int verifica_verticais(char *tabuleiro){
    if(tabuleiro[0] == tabuleiro[4] && tabuleiro[0] == tabuleiro[8]){
        if(tabuleiro[0] == 'X') {
            system("clear");
            printf("Jogador 1 venceu!");
            return 0;
        }
        else {
            system("clear");
            printf("Jogador 2 venceu!");
            return 0;
        }
    }

    if(tabuleiro[2] == tabuleiro[4] && tabuleiro[2] == tabuleiro[6]){
        if(tabuleiro[2] == 'X') {
            system("clear");
            printf("Jogador 1 venceu!");
            return 0;
        }
        else {
            system("clear");
            printf("Jogador 2 venceu!");
            return 0;
        }
    }

    return 1;
}

int verifica_vitoria(char *tabuleiro){  
    if(verifica_linhas(tabuleiro) == 0) return 0;
    if(verifica_colunas(tabuleiro) == 0) return 0;
    if(verifica_verticais(tabuleiro) == 0) return 0;
}

int roda_jogo(char *tabuleiro, int *vez){
    int posicao, rodada;
    
    system("clear");
    
    for(rodada = 1; rodada<=9;){
        printf("%c | %c | %c\n%c | %c | %c\n%c | %c | %c\n", tabuleiro[0], tabuleiro[1], tabuleiro[2], tabuleiro[3], tabuleiro[4], tabuleiro[5], tabuleiro[6], tabuleiro[7], tabuleiro[8]);
        
        printf("Insira qual quadrado deseja inserir o O ou X: ");
        scanf("%d", &posicao);

        if(tabuleiro[posicao-1] == 'X' || tabuleiro[posicao-1] == 'O'){
            system("clear");
            printf("Posicao ja ocupada, digite outra\n");
        }
        else{
            if(*vez == 1) tabuleiro[posicao-1] = 'X';
            if(*vez == 2) tabuleiro[posicao-1] = 'O';
            
            if(*vez == 1) *vez = 2;
            else *vez = 1;
            rodada++;
        }

        if(rodada >= 4){
            if(verifica_vitoria(tabuleiro) == 0) {
                int resposta;
                printf("\nDeseja jogar novamente: Sim(1), Nao(2) ?");
                scanf("%d", &resposta);

                if(resposta == 1) {
                    tabuleiro[0] = '1';
                    tabuleiro[1] = '2';
                    tabuleiro[2] = '3';
                    tabuleiro[3] = '4';
                    tabuleiro[4] = '5';
                    tabuleiro[5] = '6';
                    tabuleiro[6] = '7';
                    tabuleiro[7] = '8';
                    tabuleiro[8] = '9';
                    system("clear");
                    roda_jogo(tabuleiro, vez);
                }
                else return 0;
            }
        }
        
        system("clear");
    }
    return 0;
}

int main(){
    char tabuleiro[9] = {'1', '2', '3','4', '5', '6','7', '8', '9'};
    int vez;
    
    vez = escolha_quem_comeca();

    roda_jogo(tabuleiro, &vez);
    
    return 0;
}