//
// Created by skarth597 on 20-03-2024.
//

/*Create a program to convert temperature from Fahrenheit to Celsius and vice versa.
Use appropriate data types for the variables involved.*/

#include <stdio.h>
int main()
{
    float fah,cel;
    printf("Enter the fahrenheit to convert to celsius:\n");
    scanf("%f",&fah);
    printf("Enter the celsius to convert to fahrenheit:\n");
    scanf("%f",&cel);
    float a_cel,a_fah;
    a_fah=(cel*1.8)+32;
    a_cel=(fah-32)/1.8;
    printf("%.2f fahrenheit is %.2f celcius\n",fah,a_cel);
    printf("%.2f celcius is %.2f fahrenheit",cel,a_fah);
    return 0;
}