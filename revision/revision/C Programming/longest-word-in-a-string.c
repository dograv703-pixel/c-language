#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "I love programming in C";
    char longest[50];
    int maxLen = 0, currLen = 0, i, start = 0, maxStart = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxStart = start;
            }
            currLen = 0;
            start = i + 1;
        }
    }
    // Check last word
    if (currLen > maxLen) {
        maxLen = currLen;
        maxStart = start;
    }

    // Extract longest word
    for(i=0; i<maxLen; i++) longest[i] = str[maxStart+i];
    longest[i] = '\0';

    printf("Longest word: %s", longest);
    return 0;
}