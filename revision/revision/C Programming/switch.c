#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    switch(n)
    {
        case 1: printf("Hello");
                break;
        case 2: printf("hi");
                break;
        case 3: printf("byee");
                break;
        default: 
        printf("Invalid Input");
    }
    return 0;
}