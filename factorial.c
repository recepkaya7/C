#include <stdio.h>
#include <stdlib.h>

int main()
{   int sayi;
    int i;
    int faktoriyel=1;
    printf("sayi girin:");
    scanf("%d",&sayi);
   // for dongusu
    /*for(i=1;i<=sayi;i++){
        sayac=sayac*i;
    }
    printf(":%d",sayac);
    */
    while(i<=sayi){
        faktoriyel=faktoriyel*i;
        i++;
    }
    printf("sayýnýn faktoriyeli:%d",faktoriyel);
    return 0;
}
