#include <stdio.h>

void trocas(int v[], int n) {
    int i, j;
    for(i=1; i<n; i++){
        for(j=0; j<n-i; j++){
            if( v[j]>v[j+1] ) {
                int x = v[j];
                v[j] = v[j+1];
                v[j+1] = x;
            }
        }
    }
    printf("%d \n", v[0]);
} 

int main(void) {
    int L[] = {33, 68, 49, 16, 95, 37, 10, 57, 27, 84, 72, 31, 89, 41, 53, 69, 99, 77};
    trocas(L, 18);
} 