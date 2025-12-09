#include <stdio.h>
#include <string.h>

union Student {
    char name[50];
    int age;
    unsigned long mobile;
};

int main() {
    union Student std;

    printf("Enter name: ");
    fgets(std.name, 50, stdin);
    printf("Name: %s\n", std.name);

    printf("Enter age: ");
    scanf("%d", &std.age);
    printf("Age: %d\n", std.age);

    printf("Enter mobile: ");
    scanf("%lu", &std.mobile);
    printf("Mobile: %lu\n", std.mobile);

    // Show memory size
    printf("\nMemory size occupied by union: %lu bytes\n", sizeof(std));

    return 0;
}
