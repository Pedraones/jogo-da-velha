#include <stdio.h>

typedef struct {
    int a : 1;
    int b : 6;
} StorageBits;

int main(void) {
    StorageBits Bits = {12, 9};
    printf("%d, %d \n", Bits.a, Bits.b);
} 