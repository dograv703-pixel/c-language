#include <stdio.h>
int main() {
    int n;
    unsigned long long fact = 1;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i=1; i<=n; ++i) fact *= i;
    printf("Factorial = %llu", fact);
    return 0;
}