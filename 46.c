#include<stdio.h>
#include<stdlib.h>

void main(){
	int array[3][3],sum;
	int *ptr;
srand(time(NULL));
	ptr=(int *)calloc(5,sizeof(int));
    ptr[1]=array;
for (int i=0; i<3 ;i++)
{
    for (int j=0; j<3 ;j++)
    {
        array[i][j]=(rand() % 100)+1;
        printf(" %d ",array[i][j]);
        if (array[i][j]<ptr[1])
            ptr[1]=array[i][j];
        if (array[i][j]>ptr[0])
            ptr[0]=array[i][j];
    }
    printf("\n");
}
sum=ptr[0]+ptr[1];
printf("\nsuma- %d",sum);
}
