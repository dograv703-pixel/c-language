#include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);


    for(i = -1; i <= n-1; i++) {
     int a=9;
        for(j = 1; j <=n-i; j++) {
            printf(" ");
        }
    
        for(j = 0; j <= i; j++) {
            printf("%d",a);

         a--;
        }
        for (int k=0;k<=i+1;k++)
        {
            printf("%d",a);
            a++;
        }
        printf("\n");
    }

   

    return 0;
}