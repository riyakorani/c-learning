#include <stdio.h>

// Function prototype
float celsiusToFahrenheit(float c){
    return (c * 9.0 / 5.0) + 32;
}

int main() {
    float celsius;
    
    print("Enter temp in celeius = ");
    scanf("%f",&celsius);

    float fahrenheit = celsiusToFahrenheit(celsius); // call function
    printf("%.2f°C = %.2f°F\n", celsius, fahrenheit);
    return 0;
}

