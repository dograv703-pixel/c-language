#include <stdio.h>

int main() {
    int a[6];
    int size, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter %d elements into array:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    printf("Array before insertion:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    int n, pos;
    printf("Enter the element to insert: ");
    scanf("%d", &n);
    printf("Enter the position  ");
    scanf("%d", &pos);

    if (pos > size || pos <= 0) {
        printf("Invalid position\n");
    } else {
        for (i = size; i >= pos; i--) {
            a[i] = a[i - 1];
        }
        a[pos - 1] = n;
        size++;

        printf("Array after insertion:\n");
        for (i = 0; i < size; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
    }

    return 0;
}