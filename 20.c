#include <stdio.h>
#include <string.h>

void main()
{
    char text[100], p[100][100], str1[50], ptr1[100][100];
    int count=0,c=0,i,j=0,k,temp = 0;
    char *ptr;

    printf("text:");
    gets(text);

    for (i = 0;i<strlen(text);i++)
    {
        if ((text[i] == ' ')||(text[i] == ',' && text[i+1] == ' ')||(text[i] == '.'))
        {
            temp++;
        }
    }

    for (i = 0, j = 0, k = 0;j < strlen(text);j++)
    {
        if ((text[j] == ' ')||(text[j] == 44)||(text[j] == 46))
        {
            p[i][k] = '\0';
            i++;
            k = 0;
        }
        else
             p[i][k++] = text[j];
    }
    k = 0;
    for (i = 0;i <= temp;i++)
    {
        for (j = 0;j <= temp;j++)
        {
            if (i == j)
            {
                strcpy(ptr1[k], p[i]);
                k++;
                count++;
                break;
            }
            else
            {
                if (strcmp(ptr1[j], p[i]) != 0)
                    continue;
                else
                    break;
            }
        }
    }
    for (i = 0;i < count;i++)
    {
        for (j = 0;j <= temp;j++)
        {
            if (strcmp(ptr1[i], p[j]) == 0)
                c++;
        }
        printf("%s - %d \n", ptr1[i], c);
        c = 0;
    }
}
