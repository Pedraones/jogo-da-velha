#include <stdio.h>

void insercao(int v[], int n) {
    int i, x, j, y;

    for(i=1; i<n; i++) {
        x = v[i]; 
        j = i;

        while(j > 0 && v[j-1] > x){
            y = v[j-1];
            v[j-1] = x;
            v[j] = y;
            j--;
        }
    }

    for(i = 0; i < n; i++) printf("%d \n", v[i]);
} 

int main(void) {
    int L[] = { 68, 49, 95, 16, 90, 100, 03, 327 };
    insercao(L, 8);
} 