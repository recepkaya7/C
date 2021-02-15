#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",A[i][j]);
        }printf("\n");

    }
    kosegen(A,3);
    return 0;
}
    void kosegen(int B[3][3],int N){
    printf("\n---Matrisin Kosegeni---\n");
    int i,j;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(i==j)
            printf("%d ",B[i][j]);
        }

    }

}
