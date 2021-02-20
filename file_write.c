#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{   char deneme[25]="Computer engineer";
    int uzunluk=strlen(deneme);
    int i;
    //projen dizininin içine dosya açýlýr.
    FILE *p=fopen("input.txt","w");
    if(p==NULL){
        printf("dosya olusturulamadi");

    }else{
    for(i=0;i<uzunluk;i++){
        fputc(deneme[i],p);
    }
    printf("islem tamam");
    fclose(p);
    free(p);
    }
    return 0;
}
