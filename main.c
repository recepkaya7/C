#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void ekle(int boyuta,int boyutb,char *a,char *b)
{
    int i;
    a[boyuta-1]=' ';
    for(i=boyuta; i<boyuta+boyutb; i++)
    {
        a[i]=b[i-boyuta];
    }
/*
pazartersi 10
sali 4
carsamba 8
persembe 8
cuma 4
cumartesi 9
pazar 5
*/


}

int main()
{
    char a[20],b[20];
    printf("ilk string:");
    fgets(a,20,stdin);
    printf("ikinci string:");
    fgets(b,20,stdin);
    int au=strlen(a);
    int bu=strlen(b);
    printf("%d %d \n",au,bu);
    ekle(au,bu,&a,&b);
    for(int i=0; i<au+bu; i++)
    {
        printf("%c",a[i]);
    }
    free(a);
    free(b);
    return 0;
}
