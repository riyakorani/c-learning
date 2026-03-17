#include <stdio.h>

int factorial(int n); // prototype

int main() {
    int num = 5;

    printf("Enter number = ");
    scanf("%d",&num);
    
    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}

int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}