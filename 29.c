#include<stdio.h>
#include<stdlib.h>
int main()
{
int num,t0=1,t1=2,i,n;
printf("numarul \n");
scanf("%d",&num);
int *d;
d=(int*)malloc(sizeof(num));
i=2;
while(i<num)
{
*(d+i)=t0+t1;
t0=t1;
t1=*(d+i);
 i++;
 }
 printf("1 2");
for(i=2;i<num;i++)
 printf(" %d ",*(d+i));
 }
