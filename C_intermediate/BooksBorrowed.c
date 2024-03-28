//
// Created by skarth597 on 21-03-2024.
//
/*Write a C program that takes the age and the number of books borrowed by a library member as input. Use the following criteria to determine the membership status:

If the member is under 18 years old and has borrowed more than 2 books, display "Junior Member".
If the member is between 18 and 60 years old (inclusive) and has borrowed less than or equal to 3 books, display "Regular Member".
If the member is 60 years old or older and has borrowed less than or equal to 5 books, display "Senior Member".
Otherwise, display "Membership Status: Unknown".
Your program should:

Prompt the user to enter the age and the number of books borrowed.
Use simple if and nested if statements to determine the membership status based on the given criteria.
Display the determined membership status.*/

#include <stdio.h>
int main()
{
    int age,books;
    printf("Enter the age:\n");
    scanf("%d",&age);
    printf("Enter the number of books borrowed:\n");
    scanf("%d",&books);
    printf("Membership status:");
    if((age >0 && age<18) && books>2)
    {
        printf("Junior member\n");
    }
    else if((age>=18 && age<=60) && books<=3)
    {
        printf("Regular member\n");
    }
    else if(age>60 && books<=5)
    {
        printf("Senior member\n");
    }
    else
    {
        printf("Unknown\n");
    }
    return 0;
}