#include <stdio.h>

// Recursive function to sum marks
float sumMarks(int n) {
    if(n == 0)  // base case: no subjects left
        return 0;

    float mark;
    printf("Enter marks for subject %d: ", n);
    scanf("%f", &mark);

    return mark + sumMarks(n - 1); // recursive call
}

// Function to calculate percentage
float calculatePercentage(float totalObtained, float totalMarks) {
    return (totalObtained / totalMarks) * 100;
}

int main() {
    int subjects = 5;
    float totalMarks = subjects * 100; // each subject out of 100

    float obtained = sumMarks(subjects); // recursive sum
    float percentage = calculatePercentage(obtained, totalMarks);

    printf("Total Marks Obtained = %.2f\n", obtained);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}