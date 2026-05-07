#include <stdio.h>
#include <string.h>

int main() {
    char carta[3];
    int contador[13] = {0};
    char numero[] = "A23456789TJQK";
    
    for (int i = 0; i < 5; i++) {
        scanf("%s", carta);
        for (int j = 0; j < 13; j++) {
            if (carta[0] == numero[j]) {
                contador[j]++;
                break;
            }
        }
    }
    
    int max = 0;
    for (int i = 0; i < 13; i++) {
        if (contador[i] > max) max = contador[i];
    }
    
    printf("%d\n", max);
    return 0;
}