//
// Created by skarth597 on 5/21/2024.
//
#include <stdio.h>
#include <stdarg.h>

// Variadic function to calculate the sum of integers
int sum (int num, ...) {
    int result = 0;
    va_list args;
    //initialization
    va_start(args, num);

    for (int i = 0; i < num; ++i) {
        //iteration through arguments
        result += va_arg(args, int);
    }
    // clean up
    va_end(args);
    return result;
}
int main()
{
    int res=sum(5,1,2,3,4,5);
    printf("%d",res);
    return 0;
}