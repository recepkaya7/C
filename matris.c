#include <stdio.h>
#include <stdlib.h>

int main()
{
   int satir,sutun;
   int x,y;
   printf("satir ve sutun sayisini giriniz:");
   scanf("%d%d",&satir,&sutun);

   for(x=0;x<satir;x++){
    for(y=0;y<sutun;y++)
        printf("%d%d ",x,y);
        printf("\n");

   }

    return 0;
}
