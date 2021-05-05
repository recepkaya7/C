#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    void bulcikar(char *s1,char *s2){
    int i,j;
    int x=strlen(s1);
    int y=strlen(s2);
    int control=0;
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            if(s1[i]==s2[j]){
               s1[i]='0';
                control++;}

        }


    }
  for(i=0;i<x;i++){
    if(s1[i]=='0'){

    }
    else
        printf("%c",s1[i]);

  }

    }
int main()
{   char s1[]="Istanbul";
    char s2[]="bul";
    bulcikar(&s1,&s2);
    return 0;
}
