#include <stdio.h>
#include <stdlib.h>

int sumf(int(*array)[5])
{
    int sum = 0;
    for (int i =0; i < 5 ; i ++) {
        for (int j =0; j < 5 ; j ++) {
            sum +=*(*( array +i )+j);
        }
    }
    return sum;
}
void numless(int(*array)[5],int med){
int *ptr;
ptr=(int *)calloc(1,sizeof(int));
 for (int i =0; i < 5 ; i ++) {
        for (int j =0; j < 5 ; j ++) {
            if(*(*( array +i)+j)<med)
               ptr[0]++;
        }
    }
    printf("\nnumarul elementelor - %d",ptr[0]);
    free(ptr);
}
int main(void)
{
    int array[5][5];
    int *sum;
    float med;
    srand(time(NULL));
    for (int i=0; i<5 ;i++)
{
    for (int j=0; j<5 ;j++)
    {
        array[i][j]=(rand() % 100)+1;
        printf("%d\t",array[i][j]);
    }
    printf("\n");
}
    med=(float)sumf(array)/25;
   printf("\n%f",med);
   numless(array,med);
}


