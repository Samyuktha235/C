//
// Created by skarth597 on 01-04-2024.
//

#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Enter the number of elements in the array:\n");
    int n=0;
    scanf("%d",&n);
    int *p=(int *)malloc(n*sizeof(int));
    int sum=0;
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",p+i);
        sum=sum+p[i];
    }
    printf("Sum of the array:%d\n",sum);
    return 0;
}