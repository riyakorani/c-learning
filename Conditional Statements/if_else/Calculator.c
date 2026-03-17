#include <stdio.h>

int main() {
    int a, b;
    char op;
    scanf("%d %d %c", &a, &b, &op);

    if(op == '+')
        printf("Sum = %d\n", a + b);
    else if(op == '-')
        printf("Difference = %d\n", a - b);
    else if(op == '*')
        printf("Product = %d\n", a * b);
    else if(op == '/')
    {
        if(b != 0)
            printf("Quotient = %d\n", a / b);
        else
            printf("Division by zero error!\n");
    }
    else if(op == '%')
    {
        if(b != 0)
            printf("Remainder = %d\n", a % b);
        else
            printf("Division by zero error!\n");
    }
    else
        printf("Invalid operator\n");

    return 0;
}