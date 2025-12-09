#include <stdio.h>
#include <stdlib.h>

int main() {
    char sentence[1000];
    FILE *fptr;

    // Writing to file
    fptr = fopen("program.txt", "w");
    if (fptr == NULL) {
        printf("Error!");
        exit(1);
    }
    printf("Enter a sentence:\n");
    fgets(sentence, sizeof(sentence), stdin);
    fprintf(fptr, "%s", sentence);
    fclose(fptr);

    // Reading from file
    printf("\nReading from file:\n");
    fptr = fopen("program.txt", "r");
    if (fptr != NULL) {
        while (fgets(sentence, sizeof(sentence), fptr) != NULL) {
            printf("%s", sentence);
        }
        fclose(fptr);
    }
    return 0;
}