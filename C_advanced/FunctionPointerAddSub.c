//
// Created by skarth597 on 5/21/2024.
//
#include <stdio.h>

// Function declarations
int add(int a, int b);
int subtract(int a, int b);

int add(int a,int b)
{
    return a+b;
}

int subtract(int a,int b)
{
    return a-b;
}

int main() {
    // Declare function pointers
    int (*operationPtr)(int, int);
    operationPtr=&add;
    printf("Addition:%d\n",operationPtr(2,3));
    operationPtr=&subtract;
    printf("Subtraction:%d\n",operationPtr(10,5));
    return 0;
}