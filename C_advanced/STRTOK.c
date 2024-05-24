//
// Created by skarth597 on 5/21/2024.
//
#include <stdio.h>
#include <string.h>
#include <malloc.h>

int main()
{
    char str[150];
    fgets(str,150,stdin);
    printf("%s",str);
    char *token = strtok(str," ");
    int word_count=0,letter_count=0,max_length=0;
    char max_len_word[50];
    while(token!=NULL)
    {
        printf("%s\n",token);
       word_count++;
       letter_count=letter_count+strlen(token);
       if(strlen(token)>max_length)
       {
          strcpy(max_len_word,token);
           max_length=strlen(token);
       }
       token=strtok(NULL," ");
    }
    int avg_length_of_words = letter_count/word_count;
    printf("Total number of words:%d\n",word_count);
    printf("Average length of words:%d\n",avg_length_of_words);
    printf("longest word in the sentence:%s\n",max_len_word);
    return 0;
}