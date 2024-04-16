//
// Created by skarth597 on 4/11/2024.
//
#include <stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("File_putc.txt","w+");
    fputc('a',fp);
    fclose(fp);
    return 0;
}