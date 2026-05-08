#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char matriz[2000][2001];

int main(){
    int filas, columnas, count = 1;
    scanf("%d %d", &filas, &columnas);
    
    for(int i=0;i<filas;i++){
        scanf("%s", matriz[i]);
    }

    for(int i=0;i<columnas;i++){
        int man=0;
        for(int j=0;j<filas;j++){
            if(matriz[j][i]=='_'){
                man+=1;
            }
        }
        if(man==filas){
            count+=1;
        }
    }
    printf("%d", count);
    return 0;
}