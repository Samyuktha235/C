//
// Created by skarth597 on 20-03-2024.
//

/*Write a program to swap two numbers without using a temporary variable.
Use appropriate data types for the variables involved.*/

#include <stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the 1st number:\n");
    scanf("%d",&num1);
    printf("Enter the 2nd number:\n");
    scanf("%d",&num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("num1=%d num2=%d",num1,num2);
    return 0;
}