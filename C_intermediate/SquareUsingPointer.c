//
// Created by skarth597 on 26-03-2024.
//
#include <stdio.h>

void square(int *num) {
    *num= (*num)*(*num);
}

int main() {
    int x = 5;

    // TODO: Call the square function and print the modified value of x
    square(&x);
    printf("Squared value:%d",x);
    return 0;
}