#include<stdio.h>
#include<stdlib.h>
int prim(int num)
{
	for(int i=2;i<=num/2;i++)
	{
		if(num%i!=0)
			continue;
		else
			return 1;
	}
	return 0;
}
void main(){
	int *ptr;
	int num,num1,n=0,check,k=0;
srand(time(NULL));
	ptr=(int *)calloc(10,sizeof(int));
for (int i=0; i<10 ;i++)
{
        ptr[i]=(rand() % 1000)+1;
        printf(" %d ",ptr[i]);
}
while(1){
    num=(rand() % 1000)+1;
    num1=(rand() % 1000)+1;
    check=prim(num);
    if(check==0){
    check=prim(num1);
    if (check==0){
        if(num+num1==ptr[n]){
                printf("\n%d+%d=%d",num,num1,ptr[n]);
            n++;
        }

    }
    }
    if(n==10)
        break;
}

}

