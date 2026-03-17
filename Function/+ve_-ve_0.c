#include <stdio.h>

// prototype
void checkNumber(int n);

int main() {
    int num ;

    printf("Enter number = ");
    scanf("%d",&num);
    
    checkNumber(num); // call function
    return 0;
}

// definition
void checkNumber(int n) {
    if(n > 0)
        printf("%d is positive\n", n);
    else if(n < 0)
        printf("%d is negative\n", n);
    else
        printf("Number is zero\n");
}