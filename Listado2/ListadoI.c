#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    int p;
    scanf("%d", &p);
    
    while(p--){
        int fila;
        scanf("%d", &fila);

        int altura[20];
        for(int i=0; i<20; i++){
            scanf("%d", &altura[i]);
        }

        int linea_act[20], tam_linea=0, pasos=0;
        for(int i=0; i<20;i++){
            int a = altura[i];
            int pos = tam_linea;
            
            for(int j=0; j<tam_linea;j++){
                if(linea_act[j]>a){
                    pos=j;
                    break;
                }
            }
            
            pasos += tam_linea-pos;

            for(int j=tam_linea; j>pos; j--){
                linea_act[j] = linea_act[j-1];
            }
            linea_act[pos] = a;
            tam_linea++;
        } 
        printf("%d %d\n",fila ,pasos);
    }
    
    

    return 0;
}