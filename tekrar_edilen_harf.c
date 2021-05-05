#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    int tekrar(char *s1){
    int x=strlen(s1);
    int i,j;
    char ctrl[20];
    int k=0;
    for(i=0;i<x;i++){

        for(j=i+1;j<x;j++){
            if(s1[i]==s1[j]){
                ctrl[k]=s1[i];
                k++;

            }

        }
    }
    int q=0;
    int y=strlen(ctrl);
    for(i=0;i<y;i++){
        for(j=i+1;j<y;j++){
            if(ctrl[i]==ctrl[j])
                ctrl[j]=' ';

        }


    }
    for(i=0;i<y;i++){
        if(isalpha(ctrl[i]))
            q++;
    }
    return q;

    }

int main()
{
    char s1[50];
    printf("s1:");
    gets(s1);

    printf("sonuc:%d",tekrar(&s1));
    return 0;
}
