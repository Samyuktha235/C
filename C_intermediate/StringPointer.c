//
// Created by skarth597 on 26-03-2024.
//
#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Hello, Pointers!";
    char *ptr = str;
   // printf("%c",*ptr);
    while(*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}