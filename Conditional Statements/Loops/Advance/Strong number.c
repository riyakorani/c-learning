#include <stdio.h>
int main() {
    int n, temp, sum=0;
    printf("Enter number: ");
    scanf("%d",&n);
    temp = n;
    while(n!=0){
        int d = n%10, fact=1;
        for(int i=1;i<=d;i++)
            fact *= i;
        sum += fact;
        n/=10;
    }
    if(sum==temp) printf("Strong\n");
    else printf("Not Strong\n");
    return 0;
}