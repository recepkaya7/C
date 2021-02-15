#include <stdio.h>
#include <stdlib.h>

int main()
{   //FOR DÖNGÜSÜ
    printf("---FOR LOOP---\n");
    int i;
    for(i=0;i<5;i++){
        printf("%d\n",i+1);
    }

    printf("---WHiLE LOOP---\n");
    // WHÝLE DÖNGÜSÜ: Girilen sayýya kadar olan tek sayýlarýn toplamý

    i=0;
    int sayi;
    printf("Sayi giriniz:");
    scanf("%d",&sayi);
    int toplam=0;
    while(i<=sayi){
        if(i%2!=0)
            toplam+=i;
        i++;
    }
    printf("Toplam: %d",toplam);


    printf("---DO WHiLE LOOP---\n");
    //DO WHÝLE:Girilen sayýya kadar olan çift sayýlarýn kareleri toplamý

    i=0;
    int kareToplami=0;
    printf("Sayi giriniz:");
    scanf("%d",&sayi);
    do{
        if(i%2==0)
            kareToplami+=i*i;
        i++;
    }while(i<=sayi);
    printf("Karelerin Toplami: %d",kareToplami);
    return 0;
}
