#include<stdio.h>
int main()
{
    int a;
    printf("Enter value of a:\n");
    scanf("%d",&a);
    int *p;
    p=&a;
    printf("Value of a using pointer p: %d\n",*p);
    return 0;
}