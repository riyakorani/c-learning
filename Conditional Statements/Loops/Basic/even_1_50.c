#include <stdio.h>
int main() {
    for(int i=2; i<=50; i+=2)
        printf("%d ", i);
    return 0;
}

//2nd way-
#include <stdio.h>
int main() {
    for(int i=1; i<=50; i++)
        if(i%2==0){
            printf("%d ", i);
        }
    return 0;
}
