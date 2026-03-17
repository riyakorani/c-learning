#include <stdio.h>

double power(double base, int exponent); // prototype

int main() {
    double b ;
    int e ;

    printf("Enter b = ");
    scanf("%f",&b);

    printf("Enter e = ");
    scanf("%d",&e);


    printf("%.2f ^ %d = %.2f\n", b, e, power(b, e));
    return 0;
}

double power(double base, int exponent) {
    double result = 1;
    for(int i = 1; i <= exponent; i++) {
        result *= base;
    }
    return result;
}