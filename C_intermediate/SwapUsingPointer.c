//
// Created by skarth597 on 26-03-2024.
//

#include <stdio.h>
void swap(int *a,int *b)
{
    int temp=0;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main() {
    int x = 10, y = 20;
    swap(&x,&y);
    printf("x=%d,y=%d",x,y);
    return 0;
}