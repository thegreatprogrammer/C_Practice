// Input / output library
# include <stdio.h>

// BMI Calculator

int main(){

    // Real numbers
    float kg, 
          height, 
          heightM2, 
          bmi;

    // The formula is: BMI = kg/h

    printf("\nIngrese su peso en kilogramos: ");
    scanf("%f", &kg);

    printf("\nIngrese su altura: ");
    scanf("%f", &height);

    bmi = kg / height;

    printf("\nSu BMI es: %1.2f\n", bmi);

    return 0;
}