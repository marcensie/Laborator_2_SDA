#include<stdio.h>
#include<stdlib.h>

void main(){
	int array[3][3],array1[3][3],n=0;
	int *ptr;
srand(time(NULL));
ptr=(int *)calloc(100,sizeof(int));
for (int i=0; i<3 ;i++)
{
        for (int j=0; j<3 ;j++)
        {
            array[i][j]=(rand() % 10)+1;
            ptr[n]=array[i][j];
            n++;
        }
}
for (int i=0; i<3 ;i++)
{
        for (int j=0; j<3 ;j++)
        {
            n--;
            array1[i][j]=ptr[n];
        }
}
printf("array:\n");
for (int i=0; i<3 ;i++)
{
    for (int j=0; j<3 ;j++)
    {
        printf(" %d ",array[i][j]);
    }
    printf("\n");
}
printf("ordine inversa:\n");
for (int i=0; i<3 ;i++)
{
    for (int j=0; j<3 ;j++)
    {
        printf(" %d ",array1[i][j]);
    }
    printf("\n");
}
}
