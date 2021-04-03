#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p;
    int n,sum1=0,sum2=0,sum3=0;
	p=(int *)calloc(100,sizeof(int));
for (int i=1; i<100 ;i++)
{
        p[i]=i;
}
printf("n:");
scanf("%d",&n);
    for (int i = 0; i <= n; i++) {
        sum1+=p[i];
        sum2+=(p[i]*p[i]);
        sum3+=(p[i]*p[i]*p[i]);
    }
    //sum2
    printf("\ns1 - %d",sum1);
    printf("\ns2 - %f",(float)sum2/sum1);
    printf("\ns3 - %f",(float)sum3/sum1);
}

