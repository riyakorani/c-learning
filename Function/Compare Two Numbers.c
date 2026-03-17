#include <stdio.h>

// prototype
void compare(int a, int b);

int main() {
    int x ,y;

    printf("Enter x = ");
    scanf("%d",&x);

    printf("Enter y = ");
    scanf("%d",&y);

    compare(x, y); // call function

    return 0;
}

// definition
void compare(int a, int b) {
    if(a > b)
        printf("%d is greater than %d\n", a, b);
    else if(b > a)
        printf("%d is greater than %d\n", b, a);
    else
        printf("Both numbers are equal\n");
}