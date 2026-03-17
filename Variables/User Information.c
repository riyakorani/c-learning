#include <stdio.h>

int main() {
    char name[50];
    int age;
    float marks;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter marks: ");
    scanf("%f", &marks);

    printf("\nStudent Details:\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Marks: %.2f\n", marks);

    return 0;
}