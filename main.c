#include <stdio.h>
#include <stdlib.h>

int main()
{   // break döngüyü kirar
    printf("--break--\n");
    int i;
    for(i=0;i<10;i++){
        if(i==6)
            break;
        printf("%d\n",i);
    }



    printf("--continue--\n");
    for(i=0;i<10;i++){
        if(i==6)
            continue;
        printf("%d\n",i);
    }



    printf("--goto--\n");
    int a=10;
    LOOP : do{
        if(a==15){
            a=a+2;
            goto LOOP;
        }
        printf("a:%d\n",a);
        a++;
        }while(a<20);
    return 0;
}
