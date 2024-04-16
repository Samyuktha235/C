//
// Created by skarth597 on 4/11/2024.
//
#include <stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("emp.txt","a+");
    printf("Enter the employee details:\n");
    printf("Enter the employee id:\n");
    int id;
    scanf("%d",&id);
    printf("Enter the name of the employee:\n");
    char name[100];
    scanf("%s",&name);
    printf("Enter the salary of the employee:\n2");
    float salary;
    scanf("%f",&salary);
    fprintf(fp,"ID:%d\nName:%s\nSalary:%.2f\n\n",id,name,salary);
    return 0;
}