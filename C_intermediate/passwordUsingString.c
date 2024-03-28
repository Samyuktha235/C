//
// Created by skarth597 on 27-03-2024.
//

/*You are tasked with writing a C program that checks the strength of a password entered by a user. The program should analyze the password based on the following criteria:
The password must be at least 8 characters long.
The password must contain at least one uppercase letter, one lowercase letter, one digit, and one special character (such as !, @, #, $, %, etc.).
No spaces are allowed in the password.
Your program should prompt the user to enter a password and then evaluate its strength according to the criteria mentioned above. If the password meets all criteria, it should be deemed strong; otherwise, it should be considered weak.
Your program should provide informative messages to the user regarding the strength of their password and which criteria it fails to meet if it is weak.
Here are some guidelines to help you implement the program:
Use string functions like strlen(), isupper(), islower(), isdigit(), and strchr() for string manipulation and character checking.
You may use loops and conditional statements as necessary.
Ensure error handling for cases where the password does not meet the minimum length requirement or if spaces are found.
Utilize meaningful prompts and messages for user interaction.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char pass[50];
    printf("Enter the password:\n");
    scanf("%[^\n]s",pass);
    int len=strlen(pass);
    if(len<8)
    {
        printf("Not Strong password");
        return 0;
    }
    int uppercase=0,lowercase=0,splch=0,digit=0;
    for(int i=0;i<strlen(pass);i++)
    {
       if(isupper(pass[i]))
       {
           uppercase++;
       }
       if(islower(pass[i]))
       {
           lowercase++;
       }
       if(isdigit(pass[i]))
       {
           digit++;
       }
       if((pass[i]>32 && pass[i]<49) || (pass[i]>57 && pass[i]<65))
       {
           splch++;
       }
    }

    if(uppercase>0 && lowercase>0 && splch>0 && digit>0)
    {
        printf("Strong password");
    }
    else
    {
        printf("Password is not strong");
    }
    return 0;
}