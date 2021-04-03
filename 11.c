#include <stdio.h>
#include <stdlib.h>
int  main( )
{
int  num,num1=0,r ;
int  *ptr, *ptra ;
printf("numarul: ") ;
scanf("%d",&num) ;
ptr = &num ;
ptra = &num1 ;
while(  *ptr > 0)
{
r = (*ptr) % 10 ;
*ptra = (*ptra * 10) + r;
*ptr = (*ptr) / 10 ;
}
printf("\nnumarul inversat : %d ",*ptra);
}
