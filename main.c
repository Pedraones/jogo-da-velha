#include <stdio.h>

void conta(int value, int cont){
    int cedulas[5] = {1, 5, 10, 50, 100};
    static int qtd1;
    static int qtd5;
    static int qtd10;
    static int qtd50;
    static int qtd100;
    int resto;

    if(value){
        switch (cedulas[cont])
        {
            case 1:
                printf("case = 1");
                resto = value%cedulas[cont];
                qtd1 = value / cedulas[cont];
                
                printf("\n%d\n", qtd1);

                return conta(resto, cont -1);
                
            case 5:
                printf("case = 5");
                resto = value%cedulas[cont];
                qtd5 = value / cedulas[cont];
                
                printf("\n%d\n", qtd5);

                return conta(resto, cont -1);

            case 10:
                printf("case = 10");
                resto = value%cedulas[cont];
                qtd10 = value / cedulas[cont];

                printf("\n%d\n", qtd10);
                
                return conta(resto, cont -1);

            case 50:
                printf("case = 50");
                resto = value%cedulas[cont];
                qtd50 = value / cedulas[cont];

                printf("\n%d\n", qtd50);
                
                return conta(resto, cont -1);

            case 100:
                printf("case = 100");
                resto = value%cedulas[cont];
                qtd100 = value / cedulas[cont] > 0 ? value / cedulas[cont] : 0;
                
                printf("\n%d\n", qtd100);

                return conta(resto, cont -1);
        }
    } 

    if(value == 0) printf("1: %d, 5: %d, 10: %d, 50: %d, 100: %d", qtd1, qtd5, qtd10, qtd50, qtd100);
}

int interacao(){
    int entrada;
    printf("Digite o valor para receber as cedulas \n");
    scanf("%d", &entrada);
    return entrada;
}

int main(void) {
    int entrada = interacao();
    if(entrada) conta(entrada, 4);
} 