#include <iostream>

#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>

int main()
{
    initwindow(400,300,"FiRST SAMPLE");
    circle(100,50,40);
    while(!kbhit()){
        delay(200);
    }
    return 0;
}
