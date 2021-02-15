#include <stdio.h>
#include <stdlib.h>
void TRANSPOZEal(int A[][3],int N){
int i,j;
for(i=0;i<N;i++){
    for(j=0;j<N/2;j++){
     int temp=A[i][j];
      A[i][j]=A[j][i];
    A[j][i]=temp;
    }
}
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("%d ",A[i][j]);

        }printf("\n");}
}
int main()
{
    int matris[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    TRANSPOZEal(matris,3);
    return 0;
}
