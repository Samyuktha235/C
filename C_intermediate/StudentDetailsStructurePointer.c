//
// Created by skarth597 on 4/15/2024.
//
#include <stdio.h>
#include<string.h>
struct student
{
    int id;
    char name[100];
    char dept[50];
    int batch;
};
int main()
{
    struct student s,*ptr;
    ptr=&s;
    printf("Enter the Student id:\n");
    scanf("%d",&s.id);
    printf("Enter the name of the student:\n");
    scanf("%s",&s.name);
    printf("Enter the dept of the student:\n");
    scanf("%s",&s.dept);
    printf("Enter the batch of student:\n");
    scanf("%d",&s.batch);
   //11strcpy(ptr->name,"samyuktha");
    printf("id:%d\nName:%s\nDept:%s\nBatch:%d\n",ptr->id,ptr->name,ptr->dept,ptr->batch);
    return 0;
}