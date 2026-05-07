#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int puntaje(char pinta){
    //SIEMPRE TENER UN ESPACIO DE MAS
    char mano[3];
    int puntos = 0;
    // espacio en " %c%c" para no leer espacios
    scanf(" %c%c", &mano[0], &mano[1]);
    if(mano[0]=='A') puntos +=11;
    if(mano[0]=='K') puntos +=4;
    if(mano[0]=='Q') puntos +=3;
    if(mano[0]=='J'){
        if(mano[1] == pinta){
            puntos +=20;
        } else {
            puntos +=2;
        }
    }
    if(mano[0]=='T') puntos +=10;
    if(mano[0]=='9'){
        if(mano[1]==pinta) puntos += 14;
    }
    return puntos;
}


int main(){
    int num, total = 0;
    char pinta;
    scanf("%d %c", &num, &pinta);
    for(int i=0;i<num*4;i++){
        total += puntaje(pinta);
    }
    printf("%d", total);
    return 0;
}