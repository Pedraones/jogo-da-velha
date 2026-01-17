#include <stdio.h>
#include <string.h>

void main(){
    int num1 = 2;
    int num2 = num1 == 2 ? num1 : 4;
    printf("%d", num2);
}