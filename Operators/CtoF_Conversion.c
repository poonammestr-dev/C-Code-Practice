// Write a program that enters tmperature in celsius and  converts that into Fahrenheit.
#include <stdio.h>
int main(void)
{
    float C_temp, F_temp;
    printf("Enter a temperature in Celsius: \n");
    scanf("%f", &C_temp);
    F_temp = C_temp * ( 9.0/5.0 ) + 32;
    printf("Temp into Celsius : %.2f C\t, temp in Fahrenheit: %.2f F", C_temp ,F_temp); 
    return 0; 
}