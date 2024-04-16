//
// Created by skarth597 on 4/11/2024.
//
#include <stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("filename.txt","r");
    if (fp==NULL)
    {
        printf("Error!");
    }
    else
    {
        while(1)
        {
            char ch=fgetc(fp);
            if(ch==EOF)
            {
                printf("\nTyped fully");
                break;
            }
            printf("%c",ch);
        }
        fclose(fp);
    }
    return 0;
}