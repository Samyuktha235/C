//
// Created by skarth597 on 27-03-2024.
//

#include <stdio.h>
#include<string.h>
union Person
{                   // memory is overlapped.
    char name[20];  //As the memory is not allocated for all the members the overlap happens
    short int age;
    float height;
};
int main() {
    union Person person1; // using structure variable
    strcpy(person1.name, "Sam");
    person1.age = 21;
    person1.height = 164;
    printf("Name:%s,age:%d,height:%.2f", person1.name, person1.age, person1.height);
    return 0;
}
