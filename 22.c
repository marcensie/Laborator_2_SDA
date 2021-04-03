#include<stdio.h>
#include<stdlib.h>
void main(){
	int array[3][3],n=0,temp;
	int *prod, *sum;
	prod=(int *)calloc(5,sizeof(int));
	sum=(int *)calloc(1,sizeof(int));
	//memset(prod,1,3);
	prod[0]=prod[1]=prod[2]=1;
srand(time(NULL));
    for (int i=0; i<3 ;i++){
    for (int j=0; j<3 ;j++){
        array[i][j]=(rand() % 10)+1;
        printf(" %d ",array[i][j]);
    }
    printf("\n");
    }
for (int i=0; i<3 ;i++){
    for (int j=0; j<3 ;j++)
    {
        prod[i]*=array[i][j];
    }
        sum[0]+=prod[i];
}
printf("\nsuma - %d",sum[0]);
}


