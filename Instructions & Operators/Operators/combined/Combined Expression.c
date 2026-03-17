#include <stdio.h>

int main() {
    int a = 10, b = 5, c = 2;
    float result;

    result = (float)(a + b) * c / b;  // type conversion + arithmetic
    printf("Result = %.2f\n", result);

    printf("Relational check a > b : %d\n", a > b);
    printf("Logical check (a > b) && (b > c) : %d\n", (a > b) && (b > c));

    return 0;
}