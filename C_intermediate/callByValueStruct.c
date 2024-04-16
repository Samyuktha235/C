//
// Created by skarth597 on 4/16/2024.
//
#include <stdio.h>
struct car
{
    char name[100];
    int price;
};
void print_car_details(struct car c)
{
     printf("Car details:\nName:%s\nPrice:%d\n",c.name,c.price);
     return;
}
int main()
{
    struct car c={"Kia",1000000};
    print_car_details(c);
    return 0;
}