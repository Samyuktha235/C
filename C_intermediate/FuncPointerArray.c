//
// Created by skarth597 on 4/17/2024.
//
#include <stdio.h>
void add(int a,int b)
{
    printf("Addition:%d",a+b);
    return;
}
void sub(int a,int b)
{
    printf("Subtraction:%d",a-b);
    return;
}
void mul(int a,int b)
{
    printf("Multiplication:%d",a*b);
    return;
}
int main()
{
    void (*func_ptr[])(int,int)={add,sub,mul};
    printf("Enter the choice:\n1.Add\n2.Subtarct\n3.Multiply\n");
    int n;
    scanf("%d",&n);
    (*func_ptr[n-1])(23,5);
    return 0;
}