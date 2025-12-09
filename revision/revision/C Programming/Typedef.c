#include <stdio.h>

typedef int (*Fptr)(const void*, const void*);

int main() {
    typedef int Integer;
    typedef char CharArray[100];
    Fpts functionPointer;
    Point point = {10,20};
    Integer num =100;
    CharArray name = "vishav";


    printf("Pointer x = %d & y = %d", point.x , point.y);
    printf( "The value of num : %d\n", num);


return 0;
}