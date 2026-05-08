#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int juego[4][4], movimiento;
    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 4; j++)
            scanf("%d", &juego[i][j]);
    
    scanf("%d", &movimiento);
    
    switch(movimiento){
    case 1: 
        for(int j = 0; j < 4; j++){
            for(int h = 0; h < 4; h++)
                for(int i = 0; i < 3; i++)
                    if(juego[i][j] == 0){
                        juego[i][j] = juego[i+1][j];
                        juego[i+1][j] = 0;
                    }
            for(int i = 0; i < 3; i++) 
                if(juego[i][j] == juego[i+1][j] && juego[i][j] != 0){
                    juego[i][j] *= 2;
                    juego[i+1][j] = 0;
                    i++; 
                }
            for(int h = 0; h < 4; h++)
                for(int i = 0; i < 3; i++)
                    if(juego[i][j] == 0){
                        juego[i][j] = juego[i+1][j];
                        juego[i+1][j] = 0;
                    }
        }
        break;
        
    case 0: 
        for(int i = 0; i < 4; i++){
            for(int h = 0; h < 4; h++)
                for(int j = 0; j < 3; j++)
                    if(juego[i][j] == 0){
                        juego[i][j] = juego[i][j+1];
                        juego[i][j+1] = 0;
                    }
            for(int j = 0; j < 3; j++) 
                if(juego[i][j] == juego[i][j+1] && juego[i][j] != 0){
                    juego[i][j] *= 2;
                    juego[i][j+1] = 0;
                    j++;
                }
            for(int h = 0; h < 4; h++)
                for(int j = 0; j < 3; j++)
                    if(juego[i][j] == 0){
                        juego[i][j] = juego[i][j+1];
                        juego[i][j+1] = 0;
                    }
        }
        break;
        
    case 3: 
        for(int j = 0; j < 4; j++){
            for(int h = 0; h < 4; h++)
                for(int i = 3; i > 0; i--)
                    if(juego[i][j] == 0){
                        juego[i][j] = juego[i-1][j];
                        juego[i-1][j] = 0;
                    }
            for(int i = 3; i > 0; i--)
                if(juego[i][j] == juego[i-1][j] && juego[i][j] != 0){
                    juego[i][j] *= 2;
                    juego[i-1][j] = 0;
                    i--;
                }
            for(int h = 0; h < 4; h++)
                for(int i = 3; i > 0; i--)
                    if(juego[i][j] == 0){
                        juego[i][j] = juego[i-1][j];
                        juego[i-1][j] = 0;
                    }
        }
        break;
        
    case 2: 
        for(int i = 0; i < 4; i++){
            for(int h = 0; h < 4; h++)
                for(int j = 3; j > 0; j--)
                    if(juego[i][j] == 0){
                        juego[i][j] = juego[i][j-1];
                        juego[i][j-1] = 0;
                    }
            for(int j = 3; j > 0; j--) 
                if(juego[i][j] == juego[i][j-1] && juego[i][j] != 0){
                    juego[i][j] *= 2;
                    juego[i][j-1] = 0;
                    j--;
                }
            for(int h = 0; h < 4; h++)
                for(int j = 3; j > 0; j--)
                    if(juego[i][j] == 0){
                        juego[i][j] = juego[i][j-1];
                        juego[i][j-1] = 0;
                    }
        }
        break;
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(j > 0) printf(" ");
            printf("%d", juego[i][j]);
        }
        printf("\n");
    }
    return 0;
}