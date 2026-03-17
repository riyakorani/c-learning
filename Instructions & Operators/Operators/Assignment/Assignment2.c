#include <stdio.h>

int main() {
    int x = 15, y = 4;

    x += y;
    printf("x += y → %d\n", x);

    x -= y;
    printf("x -= y → %d\n", x);

    x *= y;
    printf("x *= y → %d\n", x);

    x /= y;
    printf("x /= y → %d\n", x);

    x %= y;
    printf("x %%= y → %d\n", x);

    return 0;
}