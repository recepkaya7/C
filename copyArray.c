#include <stdio.h>
#include <stdlib.h>
void copy(int boyut,char *ptr)
{
    char dizi[boyut];
    int i;
    for(i=0; i<boyut; i++)
    {
        dizi[i]=ptr[i];
    }
    printf("String:");
    for(i=0; i<boyut; i++)
    {
        printf("%c",dizi[i]);
    }
    printf("\nCopy:");
    for(i=0; i<boyut; i++)
    {
        printf("%c",ptr[i]);
    }
    printf("\n");
}

int main()
{
    char str[20];
    printf("String giriniz:");
    fgets(str,20,stdin);
    int karakter_sayisi;
    for( karakter_sayisi=0; str[karakter_sayisi]!='\0'; karakter_sayisi++)
    {

    }

    copy(karakter_sayisi,&str);

    return 0;
}
