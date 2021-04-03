#include<stdio.h>
#include<stdlib.h>
void main(){
	int array[100];
	int *ptr;
	ptr=(int *)calloc(2,sizeof(int));
srand(time(NULL));
for (int i=0; i<100 ;i++)
{
        array[i]=rand() % 100;
       // printf("\n%d",array[i]);
        if (array[i]%2==0)
        {
            ptr[0]++;
        }
        else
        {
            ptr[1]++;
        }
}
   printf ("\nelemente pare -%d\nelemente imapare -%d",ptr[0],ptr[1]);
   free(ptr);
}

