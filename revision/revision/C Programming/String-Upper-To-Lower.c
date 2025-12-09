#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter your name: ");
    fgets(str, sizeof(str), stdin);

    printf("Your name is: ");
    puts(str);

    int length = strlen(str);   // strlen returns size_t, so use int

    // Convert uppercase to lowercase manually
    for (int i = 0; i < length; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;   // ASCII difference between uppercase and lowercase
        }
    }

    printf("Name in lowercase: %s", str);
    return 0;
}
