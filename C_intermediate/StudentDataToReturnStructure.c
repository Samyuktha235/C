//
// Created by skarth597 on 4/16/2024.
//
#include <stdio.h>
struct Student
{
    char name[100];
    int rollno;
    int age;
};
struct Student get_data_of_student()
{
    struct Student s1;
    printf("Enter the name of the student:\n");
    scanf("%s",s1.name);
    printf("Enter the rollno:\n");
    scanf("%d",&s1.rollno);
    printf("Enter the age:\n");
    scanf("%d",&s1.age);
    return s1;
}
int main()
{
    struct Student s=get_data_of_student();
    printf("Details of the student\n");
    printf("Name:%s\nRoll Num:%d\nAge:%d\n",s.name,s.rollno,s.age);
    return 0;
}