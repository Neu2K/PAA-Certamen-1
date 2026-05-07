#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int prev, act, importado=0;
        scanf("%d", &prev);

        while(scanf("%d", &act) == 1 && act != 0){
            if (act > prev*2){
                importado += act - prev*2;
            }
            prev = act;
        }
        printf("%d\n", importado);
    }

    
    return 0;

}