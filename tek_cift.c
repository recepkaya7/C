#include <stdio.h>
#include <stdlib.h>
    void tekciftsay(int sayi,int *tek,int *cift,int basamak){
    int dizi[basamak];
    int i=0,kalan=0;
    while(sayi>0){
        kalan=sayi%10;
        sayi/=10;
        dizi[i]=kalan;
        i++;
    }
    for(i=0;i<basamak;i++){
        if(dizi[i]%2==0){
            (*cift)++;}
        else
            (*tek)++;
    }
printf("Tek sayisi: %d  \n",*tek);
printf("Cift sayisi: %d\n",*cift);
    }

int main()
{   int tek=0,cift=0;
    int sayi;
    BASLA:
    printf("sayi giriniz(en fala 6 basamakli):");
    scanf("%d",&sayi);
int basamak=0;
    int s=sayi;
while(s>0){
    s/=10;
    basamak++;
}
if(basamak>6)
    goto BASLA;
printf("basamak sayisi:%d\n",basamak);

   tekciftsay(sayi,&tek,&cift,basamak);

    printf("%d sayisinda %d tek ve %d cift sayi vardir.",sayi,tek,cift);
   return 0;
}
