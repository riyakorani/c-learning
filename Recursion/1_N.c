#include <stdio.h>

void printNumbers(int n) {
    if(n == 0) return;   // base case
    printNumbers(n - 1); // recursive call
    printf("%d ", n);    // prints in order 1 → N
}

int main() {
    int n = 5;
    printNumbers(n);
    return 0;
}