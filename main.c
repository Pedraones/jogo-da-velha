#include <stdio.h>

int main(void) {
    int *pontero;
    int num = 5;
    pontero = &num;
    printf("%p \n", pontero);
} 