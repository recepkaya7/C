#include <stdio.h>
#include <stdlib.h>

int main()
{
   int k,s,yildiz,bosluk,giris;
   printf("giris:");
   scanf("%d",&giris);
   yildiz=1;
   bosluk=giris-1;
   for(s=1;s<=giris;s++){
        for(k=1;k<=bosluk;k++){
            printf(" ");
        }
        for(k=1;k<=yildiz;k++){
            if(k==1 || k==yildiz)
                printf("o");
            else
            printf("*");
        }printf("\n");
        bosluk--;
         yildiz+=2;
   }
    bosluk=1;
    yildiz-=4;
    for(s=1;s<=giris;s++){
        for(k=1;k<=bosluk;k++){
            printf(" ");
        }
        for(k=1;k<=yildiz;k++){
            if(k==1 || k==yildiz)
                printf("o");
            else
                printf("*");
        }printf("\n");
        bosluk++;
        yildiz-=2;
    }





    return 0;
}
