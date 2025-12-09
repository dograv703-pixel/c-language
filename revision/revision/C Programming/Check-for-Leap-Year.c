#include <stdio.h>
int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    // Leap year if divisible by 400 OR (divisible by 4 AND NOT divisible by 100)
    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
        printf("%d is a Leap Year.", year);
    else
        printf("%d is not a Leap Year.", year);
    return 0;
}