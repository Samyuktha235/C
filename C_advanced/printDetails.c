//
// Created by skarth597 on 5/24/2024.
//
#include <stdio.h>
#include <string.h>
#include <string.h>

typedef struct{
    char name[100];
    int age;
}Person;

typedef struct{
    Person base;
    int employeeId;
}Employee;


//Function prototypes
void setName(Person *p,char *name);
void setAge(Person *p,int age);
void setEmployeeDetails(Employee *e,char *name,int age,int id);
void printPerson(Person *p);
void printEmployee(Employee *e);

void setName(Person *p,char *name)
{
    strcpy(p->name,name);
}
void setAge(Person *p,int age)
{
    p->age=age;
}
void setEmployeeDetails(Employee *e,char *name,int age,int id)
{
    strcpy(e->base.name,name);
    e->base.age=age;
    e->employeeId=id;
}
void printPerson(Person *p)
{
    printf("Name %s Age %d",p->name,p->age);
}
void printEmployee(Employee *e)
{
    printf("Name:%s,Age:%d,EmpId:%d",e->base.name,e->base.age,e->employeeId);
}

int main()
{
    Person p;

    setName(&p,"Vignesh");
    setAge(&p,25);

    Employee e;
    setEmployeeDetails(&e,"Raju",26,1);

    printPerson(&p);
    printf("\n");
    printEmployee(&e);
    return 0;
}