#include <stdio.h>

// Recursive function to find nth Fibonacci number
int fibonacci(int n) {
    if(n == 0) 
        return 0;
    if(n == 1) 
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    printf("Enter n = ");
    scanf("%d", &n);

    printf("Fibonacci series up to %d terms:\n", n);

    for(int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n"); // clean line after series

    return 0;
}