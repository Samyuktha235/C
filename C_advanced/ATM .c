//
// Created by skarth597 on 5/20/2024.
//
#include <stdio.h>
#include<math.h>
int main()
{
    int user1_id=12345678;
    int user1_password=12345678;
    int a=0;
    int user_name=0,user_password=0;
    printf("Enter the Username:\n");
    scanf("%d",&user_name);
    printf("Enter the Password:\n");
    scanf("%d",&user_password);
    int balance=100000;
    if(user_name==user1_id && user_password==user1_password)
    {
        a=1;
    }
    else
    {
       printf("Username and Password is wrong.Please try again later");
    }
    while(a)
    {
        printf("Enter the option to be executed:\n1.Withdrawal\n2.Balance Enquiry\n3.Exit\n");
        int k=0;
        scanf("%d",&k);
        switch(k)
        {
            case 1:
            {
                int cash_to_withdraw=0;
                printf("Withdrawal amount:\n(Enter the amount in the multiple of 20 to withdraw)\n");
                scanf("%d",&cash_to_withdraw);
                if(balance%2==0)
                {
                    if(cash_to_withdraw<balance)
                    {
                        balance=balance-cash_to_withdraw;
                        printf("cash has been debited.\nYour balance is %d\n",balance);
                    }
                   else
                    {
                       printf("There is no sufficient money to withdraw\n");
                    }
                }
                else
                {
                    printf("Enter the amount in the multiples of 20\n");
                }
                break;
            }
            case 2:
            {
                printf("Your balance is %d\n",balance);
                break;
            }
            case 3:
            {
                printf("Thank you for your transcation");
                a=0;
                break;
            }
        }
    }
    return 0;
}