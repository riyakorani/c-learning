#include <stdio.h>

int main() {
    int choice;
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("You chose Coffee\n"); break;
        case 2: printf("You chose Tea\n"); break;
        case 3: printf("You chose Juice\n"); break;
        default: printf("Invalid choice\n");
    }

    return 0;
}