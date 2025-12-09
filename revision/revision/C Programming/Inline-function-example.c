#include <stdio.h>

static inline int square(int x) {
    return x * x;
}

int main() {
    int n = 5;
    printf("Square of %d is %d", n, square(n));
    return 0;
}