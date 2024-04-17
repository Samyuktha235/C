//
// Created by skarth597 on 4/16/2024.
//
#include <stdio.h>
struct student
{
    char name[100];
    int rollnum;
    float marks[4];
};
int printStudDetails(struct student s)
{
    printf("Student details:\n");
    printf("Name:%s\nRoll Number:%d\nMarks:",s.name,s.rollnum);
    for(int i=0;i<sizeof(s.marks)/sizeof(float);i++)
    {
        printf("%.2f ",s.marks[i]);
    }
    return 1;
}
int main()
{
    struct student s;
    printf("Enter the name of the student:\n");
    scanf("%s",s.name);
    printf("Enter the Roll Number:\n");
    scanf("%d",&s.rollnum);
    int size=sizeof(s.marks)/sizeof(float);
    printf("Enter the marks:\n");
    for(int i=0;i<size;i++)
    {
       scanf("%f",&s.marks[i]);
    }
    int k=printStudDetails(s);
    if(k==1)
    {
        printf("\nThese are the details of the student");
    }
    else
    {
        printf("Error in printing the details");
    }
    return 0;
}