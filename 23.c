#include<stdio.h>
#include<stdlib.h>

void main(){
	int array[3][3],n=0,indexmin,indexmax,temp,min,max;
	int *ptr;
srand(time(NULL));
	ptr=(int *)calloc(10,sizeof(int));
for (int i=0; i<3 ;i++)
{
    for (int j=0; j<3 ;j++)
    {
        array[i][j]=(rand() % 100)+1;
        printf(" %d ",array[i][j]);
        ptr[n]=array[i][j];
        n++;
    }
    printf("\n");
}
min=max=ptr[0];
for (int i=0; i<n ;i++)
{
    if (max<ptr[i]){
            max=ptr[i];
           indexmax=i;
    }
     else if (min>ptr[i]){
      min=ptr[i];
            indexmin=i;
      }
}
if (indexmin>indexmax){
    temp=indexmax;
    indexmax=indexmin;
    indexmin=temp;
}
printf("\n");
for (int i=indexmax; i>=indexmin ;i--)
{
    printf(" %d ",ptr[i]);
}

}
