#include<stdio.h>

//Function to convert temperature from Celsius to Fahrenheit

float celsiusToFahrenheit(float celsius) {
    float fahrenheit = (celsius * 9/5) + 32;
    return fahrenheit;
}

//Function to convert temperature from Celsius to Kelvin

float celsiusToKelvin(float celsius) {
    float kelvin = (celsius + 273.15);
    return kelvin;
}  

//function to convert temperature from Fahrenheit to Celsius
float fahrenheitToCelsius(float fahrenheit) {
    float celsius = (fahrenheit - 32) * 5/9;
    return celsius;
}

//function to convert temperature from Fahrenheit to Kelvin
float fahrenheitToKelvin(float fahrenheit) {
    float kelvin = (fahrenheit - 32) * 5/9 + 273.15;
    return kelvin;
}
//Function to convert temperature from kelvin to Fahrenheit

float kelvinToFahrenheit(float kelvin) {
    float fahrenheit = (fahrenheit - 273.15) * 9/5 + 32;
    return fahrenheit;
}

//function to convert temperature from kelvin to Celsius
float kelvinToCelsius(float kelvin) {
    float celsius = (kelvin - 273.15);
    return celsius;
}

int main() {
    float temp, result;

    int choice;

    printf("Enter the temperature: ");

    scanf("%f", &temp);

    printf("\nThe following conversions can be carried out:\n\n1. Celsius to Fahrenheit");
    
    printf("\n\n2. Celsius to Kelvin");

    printf("\n\n3. Fahrenheit to Celsius");

    printf("\n\n4. Fahrenheit to Kelvin");

    printf("\n\n5. kelvin to Fahrenheit");

    printf("\n\n6. Kelvin to Celsius");

    printf("\n\nEnter your choice: ");

    scanf("%d", &choice);

    switch(choice) {
        case 1: result = celsiusToFahrenheit(temp);
        
            printf("%.2f Celsius is equal to %.2f Fahrenheit\n", temp, result);

            break;

         case 2: result = celsiusToKelvin(temp);
        
            printf("%.2f Celsius is equal to %.2f kelvin\n", temp, result);

            break;
    

        case 3: result = fahrenheitToCelsius(temp);

            printf("%.2f Fahrenheit is equal to %.2f Celsius\n", temp, result);

            break;

        
        case 4: result = fahrenheitToKelvin(temp);

            printf("%.2f Fahrenheit is equal to %.2f kelvin\n", temp, result);

            break;

         case 5: result = kelvinToFahrenheit(temp);
        
            printf("%.2f Kelvin is equal to %.2f Fahrenheit\n", temp, result);

            break;

        case 6: result = kelvinToCelsius(temp);

            printf("%.2f Kelvin is equal to %.2f Celsius\n", temp, result);

            break;

        default: printf("Invalid Choice!\n");
            break;
    }
printf("\n\n");

    return 0;
}
