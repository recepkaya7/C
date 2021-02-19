#include <stdio.h>
#include <stdlib.h>

int ebob(int sayi,int sayii){
int ebo=0;
int i;
for(i=1;i<=sayi && i<=sayii;i++){
    if(sayi%i==0 && sayii%i==0)
        ebo=i;

}return ebo;
}

int main()
{int sayi;
int sayii;
printf("iki tane sayi giriniz:");
scanf("%d%d",&sayi,&sayii);
printf("sayiarin ebobu:%d",ebob(sayi,sayii));

    return 0;
}
