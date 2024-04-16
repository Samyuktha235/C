//
// Created by skarth597 on 4/16/2024.
//
#include <stdio.h>
struct student
{
    int rollno;
    char name[100];
};
void print_struct(struct student *array,int arraySize)
{
    for(int i=0;i<arraySize;i++)
    {
        printf("index:%d\nRollno:%d,Name:%s\n",i+1,array[i].rollno,array[i].name);
    }
    return;
}
int main()
{
    struct student array[]={{1,"Sam"},{2,"Samyuktha"}};
    print_struct(array,sizeof(array)/sizeof(array[0]));
    return 0;
}