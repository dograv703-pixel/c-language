#include <stdio.h>
#include <ctype.h>
int main() {
    char str[] = "hello world from c";
    int i;

    for(i=0; str[i] != '\0'; i++) {
        if(i==0 || str[i-1]==' ') {
            str[i] = toupper(str[i]);
        }
    }
    printf("Capitalized: %s", str);
    return 0;
}