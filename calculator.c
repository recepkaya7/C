#include <stdio.h>
#include <stdlib.h>

int main()
{
    // + - / *
    char islem;
    float a,b;
    printf("Hesap Makinesi\n");
    printf("********************************\n");
    printf("");
    scanf("%f %c %f",&a,&islem,&b);

    switch (islem)
    {
    case '+':
        printf("%.2f+%.2f=%.2f",a,b,a+b);
        break;
    case '-':
        printf("%.2f-%.2f=%.2f",a,b,a-b);
        break;
    case '*':
        printf("%.2f*%.2f=%.2f",a,b,a*b);
        break;
    case '/':
        printf("%.2f/%.2f=%.2f",a,b,a/b);
        break;
    }
    printf("\n");
    return 0;
}
