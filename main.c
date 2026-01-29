#include <stdio.h>

int selmin(int v[], int i, int n){
    int k = i;
    int j;
    for(j = i+1; j < n; j++){
        if(v[k] > v[j]){
            k = j;
        }
    }
    return k;
}

void trocas(int v[], int n) {
    int i, k;

    for(i=0; i<n-1; i++){
        k = selmin(v, i, n);
        
        int x = v[i];
        v[i] = v[k];
        v[k] = x;
    }

    for(i = 0; i < n; i++) printf("%d \n", v[i]);
} 

int main(void) {
    int L[] = {33, 68, 49, 16, 95, 37, 10, 57, 27, 84, 72, 31, 89, 41, 53, 69, 99, 77};
    trocas(L, 18);
} 