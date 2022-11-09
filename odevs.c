#include    <stdio.h>   

int main(){


int k,satir,sayisi,bosluk;

    scanf("%d",&satir);
    for(k=1 ; k<=satir ; k++ ,sayisi=0){

        for(bosluk =1 ; bosluk < (satir-k+1) ; ++bosluk)
        printf(" ");
      
        for(sayisi=1;sayisi <= k;sayisi++)
        printf("* ");

        printf("\n");


    }





}