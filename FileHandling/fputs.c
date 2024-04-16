//
// Created by skarth597 on 4/15/2024.
//
#include <stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("File_puts.txt","a+");
    fputs("Hi hello.How are you?\n",fp);
    fseek(fp,0,SEEK_SET);
    //printf("%s",text);
    char text[500];
    while(fgets(text,500,fp))
    {
        printf("%s",text);
    }
    fclose(fp);
    return 0;
}