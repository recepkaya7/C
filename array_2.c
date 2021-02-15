#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int i;
    int boyut;
    printf("dizinin boyutunu giriniz:");
    scanf("%d",&boyut);
    int R[boyut];
    srand(time(NULL));
    for(i=0; i<5; i++)
    {
        R[i]=rand()%100;
        printf("dizinin %d indexindeki sayi:%d\n",i,R[i]);

    }
    free(R);
    return 0;
}
