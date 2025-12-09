#include<stdio.h>
void main()
{
    int a,b,r;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    r=a ^ b;
    printf("Result=%d",r);
}