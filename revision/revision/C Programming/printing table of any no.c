#include<stdio.h>
int main()
{

    int s;
    printf("enter the number:\n");
    scanf("%d",&s);
    int c=1;
    while (c<=10)
    {
        printf("%d x %d = %d\n",s,c,s*c);
        c++;
        
    }
    return 0;
}