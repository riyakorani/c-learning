#include <stdio.h>

int sum(int n){
    int sumNm1 = sum(n-1);
    int sumN =  sumNm1+n;
    return sumN;
};

int main(){
    int num;

    printf("Enter number = ");
    scanf("%d",&num);

    printf("sum is = %d",sum(num));

    return 0;
}



// #include <stdio.h>

// int sumNum(int n){
//     if(n==1){
//         return 1;
//     }

//     return n+sumNum(n-1);
// };
// int main(){
    // int num;

    // printf("Enter number = ");
    // scanf("%d",&num);

    // printf("sum is = %d",sum(num));
    
//     return 0;
// }