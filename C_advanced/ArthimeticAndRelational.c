//
// Created by skarth597 on 5/20/2024.
//
#include <stdio.h>
int main()
{
    int a=2,b=3;
    printf("%d\n",a+b);
    if(a<b)
    {
        printf("%d\n",1); //relational operator always returns an integer
    } else
    {
        printf("%d\n",0);
    }
    return 0;
}