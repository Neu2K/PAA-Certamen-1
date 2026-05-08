#include <stdio.h>
#include <stdlib.h>

int main(){
    int w=1, l=1, mov, dir;
    char movdir; 
    int robx = 0, roby = 0, realx = 0, realy = 0;
    while(w!=0 && l!=0){
        scanf("%d %d",&w ,&l);
        if(w!=0 && l!=0){
            scanf("%d", &mov);
            for(int i=0;i<mov;i++){
                scanf(" %c %d",&movdir, &dir);
                if(movdir == 'u'){
                    roby += dir;
                    if((realy+dir) <= l-1) realy += dir;
                    else realy = l-1;
                } if(movdir=='d'){
                    roby -= dir;
                    if((realy-dir) >= 0) realy -= dir;
                    else realy = 0;
                } if(movdir == 'r'){
                    robx += dir;
                    if((realx+dir) <= w-1) realx += dir;
                    else realx = w-1;
                } if(movdir=='l'){
                    robx -= dir;
                    if((realx-dir) >= 0) realx -= dir;
                    else realx = 0;
                }
            }
            printf("Robot thinks %d %d\n", robx, roby);
            printf("Actually at %d %d\n", realx, realy);
            printf("\n");
        }
        realy = 0; realx = 0; robx = 0; roby = 0;
    }
    return 0;
}