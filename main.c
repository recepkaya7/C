#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,sayi;
   printf("Basamaklarina parcalamak istediginiz sayi:");
   scanf("%d",&sayi);
   for(i=1; ;i*=10){
    if(sayi/i==0)
    break;
    int basamak=(sayi/i)%10;
   printf("%d x %d\n",i,basamak);
   }
    return 0;
}
