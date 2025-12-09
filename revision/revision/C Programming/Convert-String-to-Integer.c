#include <stdio.h>
int main() {
    char str[] = "1234";
    int res = 0, i;

    for (i = 0; str[i] != '\0'; i++) {
        res = res * 10 + (str[i] - '0');
    }
    printf("Integer: %d", res);
    return 0;
}