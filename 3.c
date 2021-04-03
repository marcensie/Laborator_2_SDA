#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *y = 1;
    int *x;
    printf("introduceti numerele\n");
    while(1)
    {
        scanf("%d", &x);
        if(x < 1)
            break;
        else if(y == 1)
            y = x;
        else if(x < y)
            y = cmd(x, y);
        else
            y = cmd(y, x);
    }
    printf("\nCel mai mare divizor comun : %d", y);
    return 0;
}
int cmd(int a, int b)
{
    int i;

    for(i = a; i >= 1; i--)
    {
        if(a%i == 0 && b%i == 0)
            break;
    }
    return i;
}

