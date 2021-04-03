#include<stdio.h>
#include<stdlib.h>

void main(){
	int array[50][50],num;
	int *ptr;
	ptr=(int *)calloc(101,sizeof(int));
srand(time(NULL));
for (int i=0; i<50 ;i++)
{
    for (int j=0; j<50 ;j++)
    {
        num=array[i][j]=(rand() % 100)+1;
        printf(" %d ",array[i][j]);
        ptr[num]++;
    }
    printf("\n");
}
for (int i=1; i<=100 ;i++)
{
   printf ("\t%d - %d",i,ptr[i]);
   free(ptr);
}
}

