#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char Matriz[100][100];

void agregar_a_matriz(int n, int m){
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf(" %c", &Matriz[i][j]);
}

int chequear(int filas, int cols, int n, char jugador){
    // Chequeo horizontal
    for(int i=0;i<filas;i++)
        for(int j=0;j<=cols-n;j++){
            int count=0;
            for(int k=0;k<n;k++)
                if(Matriz[i][j+k]==jugador) count++;
            if(count==n) return 1;
        }
    // Chequeo vertical
    for(int i=0;i<=filas-n;i++)
        for(int j=0;j<cols;j++){
            int count=0;
            for(int k=0;k<n;k++)
                if(Matriz[i+k][j]==jugador) count++;
            if(count==n) return 1;
        }
    // Chequeo diagonal abajo-derecha
    for(int i=0;i<=filas-n;i++)
        for(int j=0;j<=cols-n;j++){
            int count=0;
            for(int k=0;k<n;k++)
                if(Matriz[i+k][j+k]==jugador) count++;
            if(count==n) return 1;
        }
    // Chequeo diagonal abajo-izquierda
    for(int i=0;i<=filas-n;i++)
        for(int j=n-1;j<cols;j++){
            int count=0;
            for(int k=0;k<n;k++)
                if(Matriz[i+k][j-k]==jugador) count++;
            if(count==n) return 1;
        }
    return 0;
}

int main(){
    int filas, cols, n;
    scanf("%d %d %d", &filas, &cols, &n);
    agregar_a_matriz(filas, cols);

    if(chequear(filas, cols, n, 'R')) printf("RED WINS");
    else if(chequear(filas, cols, n, 'B')) printf("BLUE WINS");
    else printf("NONE");

    return 0;
}