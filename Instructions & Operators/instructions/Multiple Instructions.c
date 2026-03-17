#include <stdio.h>

int main() {
    int x, y, z;

    x = 5;       // assignment
    y = 10;      // assignment
    z = x + y;   // arithmetic instruction

    printf("x + y = %d\n", z);  // output instruction

    z = y - x;   // arithmetic instruction
    printf("y - x = %d\n", z);

    return 0;
}