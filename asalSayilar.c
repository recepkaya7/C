#include <stdio.h>
#include <stdlib.h>

int main()
{

    int min,max;
    int asalKontrol=0;
    int i,j;
    int sayi=0;
    int sayac=0;
    printf("min ve max degeri giriniz:");
    scanf("%d %d",&min,&max);


    for(i=min; i<=max; i++)
    {
        for(j=i; j>0; j--)
        {
            if(i%j==0)
                asalKontrol++;
        }

        if(asalKontrol==2)
        {
            printf("%d\n",i);
            sayi++;
            sayac=sayac+i;
        }
        asalKontrol=0;
    }

    printf("asal sayi sayisi:%d\n",sayi);


    printf("asal sayilarin toplami=%d",sayac);




    return 0;
}
