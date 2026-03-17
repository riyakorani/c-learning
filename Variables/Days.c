#include <stdio.h>

int main() {
    int days, years, weeks, remaining;

    printf("Enter number of days: ");
    scanf("%d", &days);

    years = days / 365;
    weeks = (days % 365) / 7;
    remaining = (days % 365) % 7;

    printf("Years = %d\n", years);
    printf("Weeks = %d\n", weeks);
    printf("Days = %d", remaining);

    return 0;
}