#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    char text[100];
    printf("text:");
    gets(text);
    char* string = malloc(strlen(text)+1);
    char* string1 = malloc(strlen(text)+1);
    strcpy(string,text);
    strcpy(string1,text);
    int l=0;
    char *token;
    char delimeter[2] = "/";
   token = strtok(string, delimeter);
    while( token != NULL ) {
       if(l < strlen(token)){
            l = strlen(token);
        }
       token = strtok(NULL, delimeter);
   }
    printf("lungimea maxima - %d\n",l);
    token = strtok(string1, delimeter);
 while( token != NULL ) {
        if(l == strlen(token))
       printf( "%s\n", token );
        token = strtok(NULL, delimeter);
   }
    free(string);
    free(string1);
    return 0;
}


