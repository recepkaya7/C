#include <stdio.h>
#include <stdlib.h>

int main()
{
    int satir;
    int sutun;
    int i,j;
    printf("satir ve sutun degerlerini giriniz:");
    scanf("%d%d",&satir,&sutun);
    for(i=1;i<=satir;i++){
        for(j=1;j<=sutun-i;j++){
            printf(". ");}
         for(j=1;j<=i;j++){
            printf("x ");}
           for(j=1;j<=i-1;j++){
            printf("z ");}

    printf("\n");
    }


    return 0;
}
