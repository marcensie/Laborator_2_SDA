#include<stdio.h>
#include<stdlib.h>

void main(){
	float *ch;
	int a=9,b=10,c=3,d=5;
	ch=(float *)calloc(2,sizeof(float));
	ch[0]=(float)a/b;
	ch[1]=(float)c/d;
	if (ch[0]>ch[1])
        printf("fractia %d/%d este mai mare",a,b);
    else
        printf("fractia %d/%d este mai mare",c,d);
}
