#include <stdio.h>

int main() {
    int x = 5, y = 2;
    float result1, result2;

    // automatic type conversion
    result1 = x / y;
    printf("Without type cast (int/int): %.2f\n", result1);

    // explicit type conversion
    result2 = (float)x / y;
    printf("With type cast (float/int): %.2f\n", result2);

    return 0;
}