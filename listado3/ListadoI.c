#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void restructuracion(int numero, char matriz[15][26]){
    char matrizaux[15][26];
    int i = 0;

    for(int j = 0; j < numero; j += 2){
        strcpy(matrizaux[i], matriz[j]);
        i++;
    }
    int inicio = (numero % 2 == 0) ? numero-1 : numero-2;
    for(int j = inicio; j >= 1; j -= 2){
        strcpy(matrizaux[i], matriz[j]);
        i++;
    }
    for(int k = 0; k < numero; k++)
        printf("%s\n", matrizaux[k]);
}

int main(){
    int veces, contador = 1;
    while(1){
        scanf("%d", &veces);
        if(veces == 0) break;
        char nombre[15][26];
        printf("SET %d\n", contador);
        for(int i = 0; i < veces; i++)
            scanf("%s", nombre[i]);
        restructuracion(veces, nombre);
        contador++;
    }
    return 0;
}