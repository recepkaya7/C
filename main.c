#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[3][3]= {{1,-1,3},{4,5,6},{7,8,9}};

    sirala(A,3);
    return 0;
}
void sirala(int A[][3],int N)
{
    int i,j,temp;
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            for(int k=0; k<N-1; k++)
            {
                if(A[i][k]<A[i][k+1])
                {
                    temp=A[i][k];
                    A[i][k]=A[i][k+1];
                    A[i][k+1]=temp;
                }
            }
        }
        printf("\n");
    }
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            printf("%2d ",A[i][j]);
        }
        printf("\n");
    }




}
