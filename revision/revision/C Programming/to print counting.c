#include<stdio.h>
int main()
{
    int c=1,n;
    printf("Enter no (till where you wnt to print counting):\n");
    scanf("%d",&n);
    while (c<=n)
    {
        printf("%d\n",c);
        c++;
        
    }
    return 0;
}