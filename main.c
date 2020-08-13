#include <stdio.h>
#include <stdlib.h>
    struct zaman{
    int sa;
    int dk;
    int sn;
    };
    struct zaman fark(struct zaman a[2]){
    struct zaman dizi;
    dizi.sa=a[0].sa-a[1].sa;
    if(dizi.sa<0)
        dizi.sa+=24;
    dizi.dk=a[0].dk-a[0].dk;
    if(dizi.dk<0)
        dizi.dk+=60;
    dizi.sn=a[0].sn-a[0].sn;
    if(dizi.sn<0)
        dizi.sn+=60;
    return dizi;
    }
int main()
{
    struct zaman dizi[2];
    struct zaman a;
    int i;
    for(i=0;i<2;i++){
        printf("%d. zaman:",i+1);
        scanf("%d %d %d",&dizi[i].sa,&dizi[i].dk,&dizi[i].sn);
    }
    printf("<--->");
    printf("\n");
    struct zaman sonuc=fark(dizi);
    printf("%d sa %d dk %d sn",sonuc.sa,sonuc.dk,sonuc.sn);
    return 0;
}
