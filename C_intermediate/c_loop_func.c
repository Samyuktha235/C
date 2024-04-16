//
// Created by skarth597 on 4/9/2024.
//
#include <stdio.h>
void func_call()
{
    static int i=0;
    i++;
    printf("Function is called %d time\n",i);
    return;
}
int main()
{
    for(int i=0;i<5;i++)
    {
        func_call();
    }
    return 0;
}

