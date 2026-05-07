#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    
    char respuesta[101];
    scanf("%s", respuesta);
    
    char adrian[] = "ABC";
    char bruno[]  = "BABC";
    char goran[]  = "CCAABB";
    
    int a = 0, b = 0, g = 0;
    
    for (int i = 0; i < n; i++) {
        if (respuesta[i] == adrian[i % 3]) a++;
        if (respuesta[i] == bruno[i % 4])  b++;
        if (respuesta[i] == goran[i % 6])  g++;
    }
    
    int max = a;
    if (b > max) max = b;
    if (g > max) max = g;
    
    printf("%d\n", max);
    
    if (a == max) printf("Adrian\n");
    if (b == max) printf("Bruno\n");
    if (g == max) printf("Goran\n");
    
    return 0;
}