#include<stdio.h>
#include<stdlib.h>
void main(){
	int *ptr;
	int count=0;
srand(time(NULL));
	ptr=(int *)calloc(50,sizeof(int));
for (int i=0; i<50 ;i++)
{
        ptr[i]=(rand() % 100)+1;
        printf(" %d ",ptr[i]);
}
for (int i=1; i<49 ;i++)
{
    if (ptr[i]>ptr[i+1]&&ptr[i]>ptr[i-1])
    {
        count++;
    }
}
printf("\ncount: %d",count);
}

