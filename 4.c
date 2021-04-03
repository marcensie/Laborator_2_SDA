#include<stdio.h>
#include<stdlib.h>

void main(){
	int *pta, *ptar;
srand(time(NULL));
pta=(int *)calloc(10,sizeof(int));
ptar=(int *)calloc(10,sizeof(int));
for (int i=0; i<10 ;i++)
{
    printf("\n");
        pta[i]=rand() % 100;
        ptar[i]=rand() % 100;
        if (pta[i]<ptar[i])
            printf("%d < %d",pta[i],ptar[i]);
        else if (pta[i]>ptar[i])
            printf("%d > %d",pta[i],ptar[i]);
        else
             printf("%d = %d",pta[i],ptar[i]);
}
}
