//
// Created by skarth597 on 28-03-2024.
//

#include <stdio.h>

int fibanocci()
{
    static int a=0,b=1,flag=0;
    int c=0;
    if(flag==0)
    {
        flag++;
        return 0;
    }
    else if(flag == 1)
    {
        flag++;
        return 1;
    }
    else
    {
        c=a+b;
        a=b;
        b=c;
        return c;
    }

}
int main()
{

    int k=0,c=0;
    printf("Enter the limit for fibanocci series:\n");
    scanf("%d",&k);
    //printf("0 1 ");
    for(int i=0;i<k;i++)
    {
        printf("%d ",fibanocci());
    }
}
