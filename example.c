#include <stdio.h>
#include <stdlib.h>
    void serinoCoz(int seri,int *arac,int *daire,char *blok){
    int kalan=seri/1000;
     int mod=seri%1000;
      *arac=mod%10;
    *daire=mod/10;
    if(kalan==1)
        *blok='A';
        if(kalan==2)
        *blok='B';
            if(kalan==3)
        *blok='C';
}
int main()
{
   int serino;
   printf("arac tanitim karti seri numarasini girinz:");
   scanf("%d",&serino);
   int arac;
   int daire;
   char blok;
   serinoCoz(serino,&arac,&daire,&blok);
    printf("%d Bu arac %c blokta %d nolu dairenin %d. aracidir.",serino,blok,daire,arac);
    return 0;
}
