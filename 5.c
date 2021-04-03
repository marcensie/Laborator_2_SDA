#include <stdio.h>
#include <stdlib.h>
int main(){
    char *ptr;
    int check=0;
	ptr=(char *)calloc(100,sizeof(char));
for (int i=0; i<100 ;i++)
{
        scanf("%c",&ptr[i]);
        if(ptr[i]=='*')
            break;
}
if((strlen(ptr)/4)<10){
    for (int i=strlen(ptr); i>=strlen(ptr)-(strlen(ptr)/4) ;i--)
    {
        if(ptr[i]>=97&&ptr[i]<=122)
            check++;
    }
    if(check==0){
        for (int i=(strlen(ptr)/3); i<((strlen(ptr)/3)*2) ;i++)
        {
            if(ptr[i]>=48&&ptr[i]<=57){
                check++;
            }
        }
    }
}
printf("rezultat-%d",check);
}
