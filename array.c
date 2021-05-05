#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matris[50][2];
    FILE *koordinatlar=fopen("input.txt","r");
    int i;
    for(i=0;!feof(koordinatlar);i++){
        fscanf(koordinatlar,"%d %d",&matris[i][0],&matris[i][1]);
    }int boyut=i;

    int j;
    double gecici;
    for(i=0;i<boyut-1;i++){
        for(j=i+1;j<boyut;j++){
            if(matris[i][0]>matris[j][0]){
                gecici=matris[i][0];
                matris[i][0]=matris[j][0];
                matris[j][0]=gecici;
                gecici=matris[i][1];
                matris[i][1]=matris[j][1];
                matris[j][1]=gecici;
            }
        }
    }

    for(i=0;i<boyut;i++){
        printf("(%d,%d)\n",matris[i][0],matris[i][1]);
    }

    return 0;
}
