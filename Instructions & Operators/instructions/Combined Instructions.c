#include <stdio.h>

int main() {
    int x = 10, y = 3, z;
    float result;

    z = x + y;                       // arithmetic instruction
    printf("x + y = %d\n", z);       // output instruction

    result = (float)x / y;           // type conversion instruction
    printf("x / y = %.2f\n", result);

    printf("(x > y) && (y != 0) = %d\n", (x > y) && (y != 0)); // logical instruction

    return 0;
}