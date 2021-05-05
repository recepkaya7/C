#include <stdio.h>
#include <stdlib.h>
int ters(int sayi);
int main()
{
    int sayi;
    printf("sayi giriniz:");
    scanf("%d",&sayi);
    if(ters(sayi)==sayi)
        printf("%d bir palindromik sayidir.",sayi);
    else
        printf("%d bir palindromik sayi degildir.",sayi);
    return 0;
}
int ters(int sayi)
{
    int s=0;
    int a;
    while(sayi>0)
    {
        a=sayi%10;
        s=(s*10)+a;
        sayi=sayi/10;

    }
    return s;

}
