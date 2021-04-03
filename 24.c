#include<stdio.h>
#include<stdlib.h>
int rev(int num)
{
    int n=0,r;
  int  *ptr, *ptra ;
  ptr = &num ;
ptra = &n ;
while(  *ptr > 0)
{
r = (*ptr) % 10 ;
*ptra = (*ptra * 10) + r;
*ptr = (*ptr) / 10 ;
}
return *ptra;
}
void main(){
	int array[3][3],array1[3][3],n=0,r;
	int *ptr, *ptra;
srand(time(NULL));
for (int i=0; i<3 ;i++)
{
        for (int j=0; j<3 ;j++)
        {
            array[i][j]=(rand() % 100)+10;
            printf(" %d ",array[i][j]);
            array1[i][j]=rev(array[i][j]);
        }
        printf("\n");
}
printf("\ntabloul inversat\n");
for (int i=0; i<3 ;i++)
{
    for (int j=0; j<3 ;j++)
    {
        printf(" %d ",array1[i][j]);
    }
    printf("\n");
}
}


