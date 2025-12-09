#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter your name: ");
    fgets(str, sizeof(str), stdin);

    printf("Your name is: ");
    puts(str);

    return 0;
}
