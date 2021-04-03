#include<stdio.h>
#include<stdlib.h>

void main(){
	int array[3][3],array1[3][3],n=0,k=0;
	int *ptr;
	int *ptra;
	ptr=(int *)calloc(100,sizeof(int));
	ptra=(int *)calloc(100,sizeof(int));
srand(time(NULL));
for (int i=0; i<3 ;i++)
{
    for (int j=0; j<3 ;j++)
    {
        array[i][j]=(rand() % 1000)+1;
        array1[i][j]=(rand() % 1000)+1;
        if((array[i][j]%5==0)&&(array[i][j]%7==0) ){
                n++;
        ptr[n]=array[i][j];
        }
        else if ((array1[i][j]%5==0)&&(array1[i][j]%7==0) ){
        n++;
        ptr[n]=array1[i][j];
        }
    }
    printf("\n");
}
printf("elementele divizibile cu 5 si 7");
for (int i=1; i<=n ;i++)
{
   printf ("\n%d \n",ptr[i]);
   free(ptr);
}
for (int i=0; i<3 ;i++)
{
    for (int j=0; j<3 ;j++)
    {
      if (array[i][j]%2==0 ){
        k++;
        ptra[k]=array[i][j];
        }
      if (array1[i][j]%2==0 ){
       k++;
        ptra[k]=array1[i][j];
       }
    }
}
printf("\nelementele pare");
for (int i=1; i<=k ;i++)
{
   printf ("\n%d",ptra[i]);
   free(ptra);
}
}
