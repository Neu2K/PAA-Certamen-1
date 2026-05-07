#include <stdio.h>

int main() {
    char line[100001];
    scanf("%s", line);
    
    double blanco = 0, min = 0, mayus = 0, sym = 0;
    
    for (int i = 0; line[i] != '\0'; i++) {
        char c = line[i];
        if (c == '_') blanco++;
        else if (c >= 'a' && c <= 'z') min++;
        else if (c >= 'A' && c <= 'Z') mayus++;
        else sym++;
    }
    
    double total = blanco + min + mayus + sym;
    printf("%.16f\n%.16f\n%.16f\n%.16f\n", blanco/total, min/total, mayus/total, sym/total);
    return 0;
}