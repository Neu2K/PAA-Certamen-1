#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c=0;
    scanf("%d", &a);
    for(int i=0; i<a; i++){
        scanf("%d",&b);
            if(b<0) c++;
    }
    printf("%d", c);
    return 0;
}