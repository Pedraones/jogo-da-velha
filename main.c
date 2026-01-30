#include <stdio.h>

typedef struct data{
    int Dia;
    int Mes;
    int Ano;
};

int main(void) {
    struct data natal;
    natal.Ano = 2026;
    natal.Mes = 12;
    natal.Dia = 25;
    printf("%d \n",natal.Dia);
} 