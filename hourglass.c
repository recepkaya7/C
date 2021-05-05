#include <stdio.h>
#include <stdlib.h>

int main()
{
    int satir,bosluk,yildiz,i,j;
    printf("giris:");
    scanf("%d",&satir);
    bosluk=0;
    yildiz=satir;

    for(i=1;i<=satir;i++){
        for(j=1;j<=yildiz;j++)
            printf("*");
            if(2*i<satir){
                bosluk++;
                yildiz-=2;
            }
            else{
                bosluk--;
                yildiz+=2;}

        printf("\n");
        for(j=1;j<=bosluk;j++)
            printf(" ");
    }

    return 0;
    }
