//
// Created by skarth597 on 27-03-2024.
//

#include <stdio.h>
#include<string.h>
struct Person
{
    char name[20];
    short int age;
    float height;
};
int main()
{
   /* struct Person person1; // using structure variable
    strcpy(person1.name,"Sam");
    person1.age=21;
    person1.height=164;
    printf("Name:%s,age:%d,height:%.2f",person1.name,person1.age,person1.height);*/


    struct Person employee;
    struct Person *person1=&employee;   //using pointer
    strcpy(person1->name,"Sam");
    person1->age=21;
    person1->height=164;
    printf("Size of structure: %d\n ",sizeof(employee));
    printf("Name:%s,age:%d,height:%.2f",person1->name,person1->age,person1->height);
    return 0;
}