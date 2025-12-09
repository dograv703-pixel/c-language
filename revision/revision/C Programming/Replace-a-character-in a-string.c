#include <stdio.h>
int main() {
    char str[] = "banana";
    char oldChar = 'a', newChar = 'o';
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == oldChar) {
            str[i] = newChar;
        }
    }
    printf("Replaced: %s", str);
    return 0;
}