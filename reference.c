#include <stdio.h>
#include <stdlib.h>
void call(int *x,int *y)
{
    int gecici;
    gecici=*x;
    *x=*y;
    *y=gecici;
}
int main()
{
    int x;
    int y;
    printf("x ve y degerlerini giriniz:");
    scanf("%d%d",&x,&y);
    call(&x,&y);
    printf("x:%d   y:%d",x,y);
    return 0;
}
