#include <stdio.h>

void greetA() { printf("Hello from A!\n"); }
void greetB() { printf("Hello from B!\n"); }

// Function that takes a function pointer as an argument
void execute(void (*func)()) {
    func(); // Call the passed function
}

int main() {
    execute(greetA);
    execute(greetB);
    return 0;
}