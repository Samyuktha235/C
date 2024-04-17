//
// Created by skarth597 on 4/16/2024.
//
#include <stdio.h>
struct stu
{
    int rollnum;
    char name[100];
};
void printDetails(struct stu s[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Roll number: %d, ",s[i].rollnum);
        printf("Name: %s\n",s[i].name);
    }
    return;
}
int main()
{
    printf("Enter the number of students:\n");
    int n;
    scanf("%d",&n);
    struct stu s[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the Roll number of Student:");
        scanf("%d",&s[i].rollnum);
        printf("Enter the name of student:");
        scanf("%s",s[i].name);
    }
    printDetails(s,n);
    return 0;
}