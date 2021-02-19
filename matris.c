#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int matris[6][9];
    int sayi,sayac=0;
    int dizi[54];
    while(sayac!=54){
     yenisayi:
         srand(time(NULL));
         sayi=rand()%100+1;
        for(i=0;i<sayac;i++){
          if(dizi[i]==sayi)
               goto yenisayi;
        }
        dizi[sayac]=sayi;
        sayac++;
    }
    int a=0;
    for(i=0;i<6;i++){
        for(j=0;j<9;j++){

                matris[i][j]=dizi[a];
                a++;


        }
    }
    for(i=0;i<6;i++){
        for(j=0;j<9;j++){
            printf("%5d",matris[i][j]);

        }printf("\n");
    }
    free(matris);
    free(dizi);
    return 0;

}
