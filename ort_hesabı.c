#include <stdio.h>
#include <stdlib.h>

float toplam(float d[],int N){
float plus=0;
int i;
for(i=0;i<N;i++){
    plus+=d[i];

}return plus;
}


int main()
{
    float sicaklik[10];
    int i,N;
    printf("gun sayisini giriniz:");
    scanf("%d",&N);
    for(i=0;i<N;i++){
        printf("%d.gun:",i+1);
        scanf("%f",&sicaklik[i]);
    }
    printf("toplam:%.2f\n",toplam(sicaklik,N));
    float ort=toplam(sicaklik,N)/N;
    printf("ortalama:%.2f\n",ort);
    int say=0;
    for(i=0;i<N;i++){
        if(sicaklik[i]<ort)
        say++;

    }printf("---%d gun ortalamanin altinda---\n",say);

    for(i=0;i<N;i++){
        if(sicaklik[i]<ort)
        printf("%d.gun ortalamanin altinda=%.2f\n",i+1,sicaklik[i]);
    }

    return 0;
}
