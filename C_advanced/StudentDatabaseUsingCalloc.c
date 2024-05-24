//
// Created by skarth597 on 5/22/2024.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student
{
    char name[100];
    int age;
    float grade;
}Stu;
int main()
{
    int no_of_students=0;
    printf("Enter number of students:\n");
    scanf("%d",&no_of_students);
    Stu *database=(Stu *)calloc(no_of_students,sizeof(Stu));
    if(database==NULL)
    {
        printf("Memory is not allocated.\n");
        return 0;
    }
    else
    {
        printf("Enter the Student details:\n");
    }
    for(int i=0;i<no_of_students;i++)
    {
        printf("Enter the name of student%d:",i+1);
        scanf("%s",&database[i].name);
        getchar();
        printf("Enter the age of student%d:",i+1);
        //getchar();
        scanf("%d",&database[i].age);
        getchar();
        printf("Enter the grade of student%d:",i+1);
        scanf("%f",&database[i].grade);
        getchar();

    }
    printf("The details of the student are:");
    for(int i=0;i<no_of_students;i++)
    {
        printf("The name of student%d:",i+1);
        printf("%s\n",database[i].name);
        printf("The age of student%d:",i+1);
        printf("%d\n",database[i].age);
        printf("Enter the grade of student%d:",i+1);
        printf("%.2f\n",database[i].grade);
    }
    return 0;
}