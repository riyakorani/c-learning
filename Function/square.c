#include <stdio.h>

// prototype
int square(int n);

int main() {
    int num;

    printf("Enter number = ");
    scanf("%d",&num);

    int sq = square(num); // call function

    printf("Square of %d is %d\n", num, sq);
    return 0;
}

// definition
int square(int n) {
    return n * n;
}