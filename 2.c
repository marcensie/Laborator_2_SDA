#include<stdio.h>
#include<stdlib.h>

void main(){
	int array[10];
	int *ptr;
srand(time(NULL));
for (int i=0; i<10 ;i++)
{
        array[i]=(rand() % 100)-50;
        printf(" %d\n",array[i]);
        *ptr+=array[i];
}
   printf ("suma - %d \n",*ptr);
   free(ptr);
}
