#include <stdio.h>

int main() {
    int n, max=0;

    printf("Enter number: ");
    scanf("%d",&n);
    
    while(n!=0){
        int d = n%10;
        if(d>max) max=d;
        n/=10;
    }
    printf("Max digit = %d\n", max);
    return 0;
}