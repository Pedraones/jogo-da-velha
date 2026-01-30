#include <stdio.h>

typedef struct {
    int Dia;
    int Mes;
    int Ano
} Data;

typedef struct {
    char Nome[30];
    Data Nascimento;
} Pessoa;

int main(void) {
    Pessoa Pessoa1 = {"Pedro"};
    Pessoa1.Nascimento.Ano = 2007;
    Pessoa1.Nascimento.Mes = 11;
    Pessoa1.Nascimento.Dia = 29;

    printf("Nome: %s, Nascimento: %d/%d/%d", Pessoa1.Nome, Pessoa1.Nascimento.Dia, Pessoa1.Nascimento.Mes, Pessoa1.Nascimento.Ano);
} 