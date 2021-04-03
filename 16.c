#include<stdio.h>
#include<stdlib.h>

void main(){
	int array[3][3],array1[3][3],n=0,ne=0,p=0;
	int *ptrn, *ptr0, *ptrp;
	ptrn=(int *)calloc(10,sizeof(int));
	ptr0=(int *)calloc(10,sizeof(int));
	ptrp=(int *)calloc(10,sizeof(int));
srand(time(NULL));
for (int i=0; i<3 ;i++)
{
    for (int j=0; j<3 ;j++)
    {
        array[i][j]=(rand() % 10)-4;
         array1[i][j]=(rand() % 10)-4;
         if(array[i][j]<0){
            ptrn[n]=array[i][j];
            n++;
         }
         else if(array[i][j]==0){
            ptr0[ne]=array[i][j];
            ne++;
         }
         else if(array[i][j]>0){
            ptrp[p]=array[i][j];
            p++;
         }
         if(array1[i][j]<0){
            ptrn[n]=array1[i][j];
            n++;
         }
         else if(array1[i][j]==0){
            ptr0[ne]=array1[i][j];
            ne++;
         }

         else if(array1[i][j]>0){
            ptrp[p]=array1[i][j];
            p++;
         }
    }
}
for (int i=0; i<3;i++)
{
    for (int j=0; j<3 ;j++)
    {
        printf(" %d ",array[i][j]);
    }
    printf("\n");
}
for (int i=0; i<3;i++)
{
    for (int j=0; j<3 ;j++)
    {
        printf(" %d ",array1[i][j]);
    }
    printf("\n");
}
printf("elementele negative\n");
for (int i=0; i<n ;i++)
{
    printf(" %d ",ptrn[i]);
}
printf("\nelementele nule\n");
for (int i=0; i<ne ;i++)
{
    printf(" %d ",ptr0[i]);
}
printf("\nelementele pozitive\n");
for (int i=0; i<p ;i++)
{
    printf(" %d ",ptrp[i]);
}
}
