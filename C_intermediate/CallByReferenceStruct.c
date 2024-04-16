//
// Created by skarth597 on 4/16/2024.
//
#include <stdio.h>
struct car
{
    char name[100];
    int modelno;
    int price;
};
void print_details(struct car *c)
{
    printf("Car Details:\nName:%s\nModel Number:%d\nPrice:%d\n",c->name,c->modelno,c->price);
    return;
}
int main()
{
    struct car c={"Audi",2024,10000000};
    print_details(&c);
    return 0;
}