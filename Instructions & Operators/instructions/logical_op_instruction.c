#include <stdio.h>

int main() {
    int a = 1, b = 0, c;

    c = a && b;   // logical AND instruction
    printf("a && b = %d\n", c);

    c = a || b;   // logical OR instruction
    printf("a || b = %d\n", c);

    c = !a;       // logical NOT instruction
    printf("!a = %d\n", c);

    return 0;
}