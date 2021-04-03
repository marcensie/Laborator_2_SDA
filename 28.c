#include<stdio.h>
int sumdiv(int num, int x)
{
        if(x==1)
        {
                return 1;
        }
        if(num%x==0)
        {
                return x + sumdiv(num,x-1);
        }
        else
                return sumdiv(num,x-1);
}
int main()
{
        int a,b;
        printf("intervalul : ");
        scanf("%d%d",&a,&b);
        int *ptr;
    ptr=(int *)calloc(1000,sizeof(int));
    for (int i=0; i<1000 ;i++)
    {
        ptr[i]=i;
    }
    for (int i=a; i<b ;i++)
    {

        for (int j=a+1; j<b ;j++)
        {
            if(sumdiv(ptr[i],ptr[i]/2)==sumdiv(ptr[j],ptr[j]/2)&&ptr[i]!=ptr[j])
            printf("\n%d %d sunt numere prietene",ptr[i],ptr[j]);
    }
        }
}
