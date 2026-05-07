#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int lista[42];
    int n, distinto = 0;
    
    for (int i = 0; i < 42; i++) lista[i] = 0;
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &n);
        lista[n % 42] = 1;
    }
    
    for (int i = 0; i < 42; i++) {
        distinto += lista[i];
    }
    
    printf("%d\n", distinto);
    return 0;
}