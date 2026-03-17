#include <stdio.h>
int main() {
    int n, temp, sum=0;
    printf("Enter number: ");
    scanf("%d",&n);
    temp = n;
    while(n!=0){
        int d = n%10;
        sum += d*d*d;
        n/=10;
    }
    if(sum==temp) printf("Armstrong\n");
    else printf("Not Armstrong\n");
    return 0;
}