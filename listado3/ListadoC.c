#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void agregar_a_matriz(char Matrix[5][6]){
    for(int i=0;i<5;i++){
        scanf("%s", &Matrix[i]);
    }
}

int numerovalido(char Matrix[5][6]){
    int count=0, fin;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++)
            if(Matrix[j][i]=='k')
                count++;
    }
    return count;
}

//ORDEN X-, X+, Y+, Y-
void Arreglo_Caballo(int i, int j, int Caballo[4]){
    if(j<2)
        Caballo[0] = 0;
    if(j>2)
        Caballo[1] = 0;
    if(i<2)
        Caballo[2] = 0;
    if(i>2)
        Caballo[3] = 0;
}

int comparacion_caballos(int array[4], int i, int j, char Matriz[5][6], int falso){
    if(array[0]!=0){
        if(Matriz[j-2][i+1]=='k' || Matriz[j-2][i-1]=='k'){
            falso +=1;
        }
    }
    if(array[1]!=0){
        if(Matriz[j+2][i+1]=='k' || Matriz[j+2][i-1]=='k'){
            falso +=1;
        }
    }
    if(array[2]!=0){
        if(Matriz[j+1][i-2]=='k' || Matriz[j-1][i-2]=='k'){
            falso +=1;
        }
    }
    if(array[3]!=0){
        if(Matriz[j+1][i+2]=='k' || Matriz[j-1][i+2]=='k'){
            falso +=1;
        }
    }
    return falso;
}

int movimientos_validos(char Matriz[5][6]){
    int validez = 0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(Matriz[j][i]== 'k'){
                int Caballo[4] = {1,1,1,1};
                int falso = 0;
                Arreglo_Caballo(i,j,Caballo);
                if(comparacion_caballos(Caballo,i,j, Matriz,falso)!=0){
                    
                    validez++;
                }
            }
        }
    }
    return validez;
}

int main(){
    char Matriz[5][6];
    agregar_a_matriz(Matriz);
    if(numerovalido(Matriz)!=9){
        printf("invalid");
        return 0;
    }
    if(movimientos_validos(Matriz)!=0){
        printf("invalid");
    } else {
        printf("valid");
    }
    return 0;
}