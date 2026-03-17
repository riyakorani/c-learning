#include <stdio.h>

int Fact(int n){
    int factNm1 = fact(n-1);
    int factN =  factNm1*n;
    return factN;
};

int main(){
    int num;

    printf("Enter number = ");
    scanf("%d",&num);

    printf("factorial is = %d",fact(num));

    return 0;
}



// #include <stdio.h>

// int factNum(int n){
//     if(n<=1){
//         return 1;
//     }

//     return n* factNum(n-1);
// };
// int main(){
    // int num;

    // printf("Enter number = ");
    // scanf("%d",&num);

    // printf("factorial is = %d",fact(num));
    
//     return 0;
// }