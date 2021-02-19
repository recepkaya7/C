#include <stdio.h>
#include <stdlib.h>

int ekok(int a,int b){
int i;
int eko=1;

for(i=1;i<=a*b;i++){
    if(b%a==0){
    eko=b;
    break;}
    else if(a%b==0) {
    eko=a;
    break; }
    else if(i%a==0 && i%b==0 && i<a*b){
    eko=i;
    return eko;}
    else
        eko=a*b;
        break;
}return eko;
}

int main()
{   int x,y;
    printf("iki sayi girin:");
    scanf("%d%d",&x,&y);
    printf("sonuc:%d",ekok(x,y));
    return 0;
}
