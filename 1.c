#include<stdio.h>
#include<stdlib.h>

void main(){
	int num;
	int *ptr;
	ptr=(int *)calloc(50,sizeof(int));
srand(time(NULL));
for (int i=0; i<1000 ;i++)
{
    printf("%d-",i+1);
    for (int j=0; j<5 ;j++)
    {
        num=(rand() % 40)+1;
        printf(" %d ",num);
        ptr[num]++;
    }
    printf("\n");
}
for (int i=1; i<41 ;i++)
{
   printf ("%d - %d \n",i,ptr[i]);
   free(ptr);
}
}
