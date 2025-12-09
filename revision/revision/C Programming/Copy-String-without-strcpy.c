#include <stdio.h>
int main() {
    char s1[] = "Source", s2[50];
    int i;
    for (i = 0; s1[i] != '\0'; ++i) {
        s2[i] = s1[i];
    }
    s2[i] = '\0';
    printf("Copied: %s", s2);
    return 0;
}