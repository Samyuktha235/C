//
// Created by skarth597 on 4/11/2024.
//
#include <stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("filename.txt","a+");
    fprintf(fp,"\nHi hello!!! How are you? I am sam");
    fflush(fp);
    fseek(fp,0,SEEK_SET);
    char buff[200];
    while(fscanf(fp,"%s",buff)!=EOF)  //prints word by word
    {
        printf("%s ",buff);
    }
    /*while(1)    // prints as it is in the file
    {
        char ch=fgetc(fp);
        if(ch==EOF)
        {
            printf("\nTyped fully");
            break;
        }
        printf("%c",ch);
    }*/
    fclose(fp);
    return 0;
}