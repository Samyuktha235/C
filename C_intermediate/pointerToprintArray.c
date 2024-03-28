//
// Created by skarth597 on 26-03-2024.
//
#include <stdio.h>
int main()
{
    int arr[]={20,30,40,50};
    int * ptr=arr;
    printf("Printing array using pointer:\n");
    for(int i=0;i<5;i++)
    {
        printf("%d ",*ptr+i);
    }
    return 0;
}