#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p;
    float res=0;
    int n;
	p=(int *)calloc(100,sizeof(int));
for (int i=1; i<100 ;i++)
{
        p[i]=i;
}
printf("n:");
scanf("%d",&n);
    for (int k = 1; k <= n; k++) {
       res+=(1.0/p[k]);
    }
    printf("\nrezultat - %f",res);
}

