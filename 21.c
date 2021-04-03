#include <stdio.h>
#include <stdlib.h>
int main()
{
     int *sum;
     int *arr;
     int r;
    arr=(int *)calloc(50,sizeof(int));
    sum=(int *)calloc(50,sizeof(int));
    for (int i=0; i<50 ;i++)
    {
        arr[i]=(rand() % 100)+10;
        printf(" %d ",arr[i]);
    }
    printf("\nsuma\n");
    for (int i=0; i<50 ;i++)
    {
    while (arr[i] != 0) {
            r=arr[i]%10;
        sum[i]+= r;
        arr[i] /=10;
    }
    printf(" %d ", sum[i]);
    }
}
