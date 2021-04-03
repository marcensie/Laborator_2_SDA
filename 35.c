#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    float pi=3.14;
    float *p;
    int x1=2,x2=3,v1=5,v2=4;
	p=(float *)calloc(2,sizeof(float));

p[0]=sqrt(((x1*x1)*(v2*v2) - (x2*x2)*(v1*v1))/((v2*v2)-(v1*v1)));
p[1]=2*pi*sqrt(((x1*x1)-(x2*x2))/((v2*v2)-(v1*v1)));
    printf("\nA - %f",p[0]);
    printf("\nT- %f",p[1]);
}

