#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    getchar();
    while (n--) {
        char a[51], b[51];
        scanf("%s", a);
        scanf("%s", b);
        
        printf("%s\n%s\n", a, b);
        
        int len = strlen(a);
        for (int i = 0; i < len; i++) {
            if (a[i] == b[i]) {
                printf("%c", '.');
            } else {
                printf("%c", '*');
            }
        }
        printf("\n\n");
    }
    
    return 0;
}