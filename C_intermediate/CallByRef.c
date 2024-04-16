//
// Created by skarth597 on 4/10/2024.
//
#include <stdio.h>
void add(int *p,int *q)
{
    int sum=*p+*q;
    printf("Sum=%d",sum);
    return;
}
int main()
{
    int a=10,b=20;
    add(&a,&b);
    return 0;
}