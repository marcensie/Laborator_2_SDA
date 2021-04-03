#include <stdio.h>
void main()
{
    int n;
    printf ("n=");
    scanf ("%d",&n);
    int *ptr;
    ptr=(int *)calloc(3,sizeof(int));
    ptr[0]=1;
    for (int a=ptr[0];a<n;a++)
    {
        for(int b=a+1;b<n;b++)
        {
            for(int c=b+1;c<n;c++)
            {
                if(((a*a)+(b*b))==(c*c))
                printf("%d^2 + %d^2 = %d^2\n",a,b,c);
            }
        }
    }
}
