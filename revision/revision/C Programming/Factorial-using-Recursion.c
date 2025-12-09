#include <stdio.h>

long long factorial(int n) {
    if (n == 0) return 1;
    else return n * factorial(n - 1);
}

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("Factorial of %d = %lld", n, factorial(n));
    return 0;
}