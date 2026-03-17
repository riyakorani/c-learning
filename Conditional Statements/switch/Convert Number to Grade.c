#include <stdio.h>

int main() {
    int gradeCode;
    scanf("%d", &gradeCode);

    switch(gradeCode) {
        case 1: printf("Grade A\n"); break;
        case 2: printf("Grade B\n"); break;
        case 3: printf("Grade C\n"); break;
        case 4: printf("Grade D\n"); break;
        default: printf("Invalid grade\n");
    }

    return 0;
}