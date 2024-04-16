//
// Created by skarth597 on 4/15/2024.
//
#include <stdio.h>
int main()
{
    FILE *fp1,*fp2;
    fp1=fopen("File_puts.txt","r");
    fp2=fopen("File2.txt","w");
    char ch;
    if(fp1==NULL)
    {
        printf("Error!!!");
        return 0;
    }
    while(1)
    {
        ch=fgetc(fp1);
        if(ch==EOF)
        {
            break;
        }
        printf("%c",ch);
        fputc(ch,fp2);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}