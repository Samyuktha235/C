//
// Created by skarth597 on 4/17/2024.
//
#include <stdio.h>
void add(int a,int b)
{
    printf("Addition:%d",a+b);
    return ;
}
int main()
{
    void (*func_ptr)(int,int)=&add;
    (*func_ptr)(5,10);
    return 0;
}