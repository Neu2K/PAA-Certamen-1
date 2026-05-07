#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void agregar_a_matriz(int R, int C ,char Matrix[R][C]){
    for(int i=0;i<R;i++){
        scanf("%s", &Matrix[i]);
    }
}

void Printeo(int R, int C,int Zr,int Zc ,char Matriz[R][C]){
    for(int l=0;l<R;l++){
        for(int i=0;i<Zr;i++){
            for(int k=0;k<C;k++){
                for(int j=0; j<Zc;j++){
                    printf("%c", Matriz[l][k]);
                } 
            }
            printf("\n");
        }   
    }
}

int main(){
    int R, C, Zr, Zc;
    scanf("%d %d %d %d", &R,&C,&Zr,&Zc);
    char matriz[R][C];
    agregar_a_matriz(R,C,matriz);
    Printeo(R,C,Zr,Zc,matriz); 
    return 0;
}