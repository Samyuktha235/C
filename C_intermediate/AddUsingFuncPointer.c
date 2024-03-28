//
// Created by skarth597 on 26-03-2024.
//
#include <stdio.h>
int add(int a,int b)
{
  return a+b;
}

int (*funcptr)(int,int);

void callfunction(int (*ptr) (int,int))
{
    printf("%d",ptr(30,40));
}
int main()
{
    int result=0;
    funcptr=&add;
    result=funcptr(10,20);
    printf("%d\n",result);
    callfunction(funcptr);
    return 0;
}