#include <stdio.h>
#include <stdlib.h>

int main()
{
    char matris[9][9];
    int i,j;
    int x,y;
    printf("x ve y degerlerini giriniz(0-7):");
    scanf("%d %d",&y,&x);

    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            if(i==x && j==y)
                matris[i][j]='A';
            else
                matris[i][j]='-';
            if(i==x-2 || i-2==x){
                if(j-1==y || j+1==y)
                matris[i][j]='*';}
            if(i==x-1 || i-1==x){
                if(j-2==y || j+2==y)
                matris[i][j]='*';}
        }//printf("\n");
        }
        printf(" ");
        for(i=0;i<8;i++){
            printf("%d",i);
        }printf("\n");
        for(i=0;i<8;i++){
                printf("%d",i);
            for(j=0;j<8;j++){
                printf("%c",matris[i][j]);
            }printf("\n");
        }
        free(matris);
    return 0;
}
