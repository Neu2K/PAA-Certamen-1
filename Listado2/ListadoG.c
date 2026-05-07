#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int min_junk, best_day = 0, junk;
    scanf("%d", &min_junk);
    
    for (int i = 1; i < n; i++) {
        scanf("%d", &junk);
        if (junk < min_junk) {
            min_junk = junk;
            best_day = i;
        }
    }
    
    printf("%d\n", best_day);
    return 0;
}