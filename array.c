#include <stdio.h>
#include <stdlib.h>

int main()
{

   int A[4]={7,2,9,4};
   int i;
   int max=A[0];
   int min=A[0];
   for(i=1;i<4;i++){
    if(max>A[i])
        max=max;
    else
        max=A[i];
   }
   for(i=1;i<4;i++){
    if(min<A[i])
        min=min;
    else
        min=A[i];
   }printf("dizideki max deger:%d\n",max);
    printf("dizideki min deger:%d\n",min);


    return 0;
}
