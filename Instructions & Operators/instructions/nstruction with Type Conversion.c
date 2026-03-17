#include <stdio.h>

int main() {
    int a = 7, b = 2;
    float result;

    result = (float)a / b;   // instruction with type conversion

    printf("Result = %.2f\n", result);  // output instruction

    return 0;
}