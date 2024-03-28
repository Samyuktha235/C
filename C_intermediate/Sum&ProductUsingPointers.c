//
// Created by skarth597 on 26-03-2024.
//
#include <stdio.h>
void calculateSumAndProduct(int a,int b,int *sum,int *product)
{
    *sum=a+b;
    *product=a*b;
}
int main()
{
    int a=10,b=20,*sum,*product;
    calculateSumAndProduct(a,b,&sum,&product);
    printf("sum=%d,product=%d",sum,product);
    return 0;
}