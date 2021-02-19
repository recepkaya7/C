#include <stdio.h>
#include <stdlib.h>




int main()
{
    int a=0;
    int b=1;
    int sonuc;
    int sayi;
    printf("sayi:");
    scanf("%d",&sayi);
    printf("%d %d ",a,b);
    for(int i=1; i<=sayi-2; i++)
    {
        sonuc=a+b;
        a=b;
        b=sonuc;
        printf("%d ",sonuc);
    }




    return 0;

}















