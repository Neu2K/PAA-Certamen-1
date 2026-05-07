#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d\n", &n);
    
    while (n--) {
        char frase[101];
        fgets(frase, 101, stdin);
        
        char prefijo[] = "Simon says ";
        int comp = 1;
        for (int i = 0; i < 11; i++) {
            if (frase[i] != prefijo[i]) {
                comp = 0;
                break;
            }
        }
        
        if (comp) {
            printf("%s", frase + 11);
        }
    }
    
    return 0;
}