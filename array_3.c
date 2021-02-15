#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N=6,M=4,ia=0,ib=0,ic=0;
    int A[]={1,3,5,7,8,9};
    int B[]={2,6,10,13};
    int C[10];
    while(ia<N && ib<M){
        if(A[ia]>B[ib]){
            C[ic]=B[ib];
            ib++;
            ic++;
        }else{
        C[ic]=A[ia];
        ic++;
        ia++;
        }
    }
    while(ib<M){
        C[ic]=B[ib];
        ic++;
        ib++;
    }
    while(ia<N){
        C[ic]=A[ia];
        ia++;
    ic++;}
    for(int i=0;i<M+N;i++){
        printf("%d ",C[i]);

    }


    return 0;
}
