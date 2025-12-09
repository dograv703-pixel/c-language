#include<stdio.h>
int main()
{
    int n,count=0;
    printf("enter the number\n");
    scanf("%d",&n);
    while (n!=0)                    
    {           
        count=count+n%10;
        n=n/10;
    }
    printf("the sum of the digits in the number is %d\n",count);
    return 0;
}