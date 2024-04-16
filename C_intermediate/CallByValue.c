//
// Created by skarth597 on 4/10/2024.
//
#include <stdio.h>
#include <stdlib.h>
void  add(int a,int b)
{
    printf("Sum by call by value=%d\n",a+b);
    printf("Address of a,b-->%p,%p\n",&a,&b);
    return;
}
void add1(int *p,int *q)
{
    int sum=*p+*q;
    printf("Sum by call by ref=%d\n",sum);
    printf("Address of p,q-->%p,%p\n",&p,&q);
    return;
}
int main()
{
    int a=10, b=20;
    add(a,b);
    add1(&a,&b);
    qsort();
    return 0;
}