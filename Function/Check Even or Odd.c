#include <stdio.h>

void checkEvenOdd(int n); // prototype

int main() {
    int num;

    printf("Enter number = ");
    scanf("%d",&num);

    checkEvenOdd(num);
    
    return 0;
}

void checkEvenOdd(int n) {
    if(n % 2 == 0)
        printf("%d is Even\n", n);
    else
        printf("%d is Odd\n", n);
}