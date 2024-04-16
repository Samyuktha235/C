//
// Created by skarth597 on 4/9/2024.
//
#include <stdio.h>
int b=10;

int main()
{
    auto int a=1;
    printf("auto - %d, address - %p\n",a,&a);
   // b=10;
    extern int b;
    printf("extern - %d, address - %p\n",b,&b);
    static int c=3;
    printf("static - %d, address - %p\n",c,&c);
    register int i=5;
   // printf("Register - %d, address - %p\n",i,&i); //register hardware
    return 0;
}