
#include <stdio.h>
int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14}, n=7, key, low=0, high=6, mid;
    printf("Enter key: ");
    scanf("%d", &key);

    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            printf("Found at index %d", mid);
            return 0;
        }
        if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    printf("Not Found");
    return 0;
}