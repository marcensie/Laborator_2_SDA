#include<stdio.h>
#include<stdlib.h>

void main(){
	int num,max=0,result;
	int *ptr;
srand(time(NULL));
num = (rand() % 50)+1;
	ptr=(int *)calloc(num,sizeof(int));
for (int i=0; i<num ;i++)
{
        ptr[i]=(rand() % 1000)+1;
        printf(" %d ",ptr[i]);
        if (max<ptr[i])
            max=ptr[i];
        if (max==ptr[i])
            result=i;
}
printf("\nnumarul de ordine - %d",result+1);
}
