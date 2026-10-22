// Write a program that enters tmperature in celsius and  converts that into Fahrenheit.
#include <stdio.h>
int main()
{
    float C_temp, F_temp;
    printf("Enter a temperature in Celsius: \n");
    scanf("%f", &C_temp);
    F_temp = C_temp * ( 9.0/5.0 ) + 32;
    printf("Temp into Celsius : %f\t, temp in Fahrenheit: %f", C_temp ,F_temp); 
    return 0; 
}