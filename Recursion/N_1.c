#include <stdio.h>

void printReverse(int n) {
    if(n == 0)
     return;  // base case
    
    printf("%d ", n);
    printReverse(n - 1); // recursive call
}

int main() {
    int n = 5;
    printReverse(n);
    return 0;
}