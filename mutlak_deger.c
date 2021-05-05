#include <stdio.h>
#include <stdlib.h>

    int mutlak(int x){
    if(x>=0)
        return x;
    else
        return -x;
    }

int main()
{int sayi;
printf("sayiyi giriniz:");
scanf("%d",&sayi);
printf("mutlak deger:%d",mutlak(sayi));

    return 0;
}
