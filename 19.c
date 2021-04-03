#include<stdio.h>
#include<stdlib.h>
void main(){
	int array[3][3],array1[3][3],n=0,temp;
	int *ptr;
	ptr=(int *)calloc(50,sizeof(int));

srand(time(NULL));
    for (int i=0; i<3 ;i++){
    for (int j=0; j<3 ;j++)
    {
        array[i][j]=(rand() % 10)-4;
         array1[i][j]=(rand() % 10)-4;
    }
}
for (int i=0; i<3 ;i++){
    for (int j=0; j<3 ;j++)
    {
        ptr[n]=array[i][j];
        n++;
        ptr[n]=array1[i][j];
        n++;
    }
}
for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
           if(ptr[i] < ptr[j]) {
               temp = ptr[i];
               ptr[i] = ptr[j];
               ptr[j] = temp;
           }
        }
    }
for (int i=0; i<n ;i++)
{
  printf(" %d ",ptr[i]);
}
}


