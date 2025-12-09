#include <stdio.h>

// Call by Value
void swapValue(int a, int b) {
    int temp = a; a = b; b = temp;
}

// Call by Reference
void swapReference(int *a, int *b) {
    int temp = *a; *a = *b; *b = temp;
}

int main() {
    int x = 10, y = 20;

    swapValue(x, y);
    printf("By Value: x=%d, y=%d\n", x, y); // No change

    swapReference(&x, &y);
    printf("By Reference: x=%d, y=%d\n", x, y); // Swapped
    return 0;
}