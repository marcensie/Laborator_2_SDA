#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num = 2322;
     int prod=1;
     int *ptr;
    ptr=(int *)calloc(1,sizeof(int));
    ptr[0]++;
    while (num != 0) {
            ptr[0]=num%10;
        prod*= ptr[0];
        num /=10;
    }
    printf("produsul-%d ", prod);
}
