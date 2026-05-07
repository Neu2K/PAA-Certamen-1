#include <stdio.h>
#include <string.h>

int main() {
    char frase[31];
    scanf("%s", frase);
    
    int hiss = 0;
    for (int i = 0; i < strlen(frase) - 1; i++) {
        if (frase[i] == 's' && frase[i+1] == 's') {
            hiss = 1;
            break;
        }
    }
    
    printf("%s\n", hiss ? "hiss" : "no hiss");
    return 0;
}