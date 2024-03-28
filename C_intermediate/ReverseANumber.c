//
// Created by skarth597 on 22-03-2024.
//

#include <stdio.h>
int main()
{
    int num=0,rev_num=0,rem=0;
    printf("Enter a positive number:\n");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        rev_num=(rev_num*10)+rem;
        num=num/10;
    }
    printf("The reversed number is:%d",rev_num);
    return 0;
}