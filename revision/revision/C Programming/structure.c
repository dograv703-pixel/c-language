#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    unsigned long mobile;
};
int main() {
    struct Student std;
    printf("Enter name:");
    fgets(std.name, 50, stdin);
    printf("Enter age:");
    scanf("%d", &std.age);
    printf("Enter mobile:");
    scanf("%d", &std.mobile);
    printf("\nName: %s\n", std.name);
    printf("\nAge: %d", std.age);
    printf("\nMobile: %d\n", std.mobile);

    printf("\nMemory size occupied by Structure: %lu bytes\n", sizeof(std));
    return 0;
}
