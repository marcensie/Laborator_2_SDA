#include <stdio.h>
#include<stdlib.h>
int main()
{
    int i, n= 0;
    int *num;
    num=(int *)malloc(10*sizeof(int));
    printf("numarul: ");
    scanf("%d", num);
      for(i = 1; i <= *num / 2; i++)
    {
        if((*num)%i == 0)
        {
            n += i;
        }
    }
    if(n == (*num))
    {
        printf("%d este numar perfect", *num);
    }
    else
    {
        printf("%d nu este numar perfect", *num);
    }
    return 0;
}
