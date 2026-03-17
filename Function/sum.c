#include <stdio.h>

// Function prototype
int add(int a, int b);

int main() {
    int x = 5, y = 10;
    int result = add(x, y);  // function call
    printf("Sum = %d\n", result);
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}