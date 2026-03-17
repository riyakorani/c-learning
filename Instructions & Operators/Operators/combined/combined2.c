#include <stdio.h>

int main() {
    int a = 6, b = 3, c = 2, d = 4;
    float result;

    result = (float)(a + b) * c / d;
    printf("Result = %.2f\n", result);

    printf("a + b > c : %d\n", (a + b) > c);
    printf("(a < b) || (c > d) : %d\n", (a < b) || (c > d));

    return 0;
}