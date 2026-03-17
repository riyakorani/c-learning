#include <stdio.h>

int main() {
    int a = 9, b = 4;
    float result1, result2;

    result1 = a / b;           // int / int → automatic int → stored in float
    result2 = (float)a / b;    // explicit type conversion

    printf("Without type cast: %.2f\n", result1); // 2.00
    printf("With type cast: %.2f\n", result2);    // 2.25

    return 0;
}