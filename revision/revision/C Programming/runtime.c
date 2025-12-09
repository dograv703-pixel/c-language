#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Allocate memory for n integers
    ptr = malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Not enough space\n");
        return 1; // Exit if allocation fails
    }

    // Example: initialize and print values
    for (i = 0; i < n; i++) {
        ptr[i] = i + 1; // store values
    }

    printf("Stored values:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }

    // Free allocated memory
    free(ptr);

    return 0;
}
