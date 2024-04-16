//
// Created by skarth597 on 4/11/2024.
//
#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp;
    char str[20];
    strcpy(str,"sam");
    fp=fopen("filename.txt","r");
    if(fp==NULL)
    {
        printf("File do not exists");
    }
    else
    {
        printf("File exists and read\n");
        int num;
        printf("Enter the number to enter in the file:\n");
        scanf("%d",&num);
        fprintf(fp," %s %d",str,num);
        fclose(fp);
    }
    return 0;
}