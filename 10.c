#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int  e,num[36],j;
	ptr=(int *)calloc(10,sizeof(int));
srand(time(NULL));
for (int i=0; i<10 ;i++)
{
    j=0;
    ptr[i]=(rand() % 50)+1;
    printf("\n%d ",ptr[i]);
while (ptr[i]!=0)
    {
        e=ptr[i]%2;
        ptr[i]/=2;
        num[j]=e;
        j++;
    }
     printf("in baza 2 - ");
    for(j=j-1; j>=0; j--)
        printf("%d", num[j]);
}
}

