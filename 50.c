#include<stdio.h>
#include<stdlib.h>
void main(){
	int *ptr;
	int max;
srand(time(NULL));
	ptr=(int *)calloc(10,sizeof(int));
for (int i=0; i<10 ;i++)
{
        ptr[i]=(rand() % 10)+1;
        printf(" %d ",ptr[i]);
}
max=ptr[0];
for (int i=1; i<49 ;i++)
{
    if (max<ptr[i])
        max=ptr[i];
        if (ptr[i]==10){
            if(i<=5){
                ptr[i-1]*= ptr[i-1];
                ptr[i+1]*= ptr[i+1];
            }
        }
}
printf("\nsirul schimbat");
for (int i=0; i<10 ;i++)
{
        printf(" %d ",ptr[i]);
}
}

