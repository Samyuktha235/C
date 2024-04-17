//
// Created by skarth597 on 4/17/2024.
//
#include<stdio.h>
void func1()
{
    printf("Func1 is called and printed\n");
    return ;
}
void func2()
{
    printf("Func2 is called and printed\n");
    return ;
}
void function(void (*func)())
{
    func();
    return;
}
int main()
{
    function(func1);
    function(func2);
    return 0;
}