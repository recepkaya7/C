#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("dizinin boyutunu giriniz:");
    int sayi;
    scanf("%d",&sayi);

    int A[sayi];
    int i;
    A[0]=0;
    A[1]=1;

    for(i=2;i<sayi+1;i++){
        A[i]=A[i-1]+A[i-2];

    }
     for(i=1;i<sayi;i++){

        printf("%d ",A[i]);
    }
    free(A);

    return 0;
}
