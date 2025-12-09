#include <stdio.h>
int main() {
    int n, rev = 0, orig;
    printf("Enter n: ");
    scanf("%d", &n);
    orig = n;
    while(n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    if (orig == rev) printf("Palindrome");
    else printf("Not Palindrome");
    return 0;
}