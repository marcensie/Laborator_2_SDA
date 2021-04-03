#include <stdio.h>
#include <stdlib.h>
int main()
{
     int *res;
     int *numar;
     int p;
     srand(time(NULL));
    numar=(int *)calloc(50,sizeof(int));
    res=(int *)calloc(50,sizeof(int));
    for (int i=0; i<50 ;i++)
    {
        numar[i]=(rand() % 100)+10;
        printf(" %d ",numar[i]);
    }
    printf("\nsuma numerelor\n");
    for (int i=0; i<50 ;i++)
    {
    while (numar[i] != 0) {
            p=numar[i]%10;
        res[i]+= p;
        numar[i] /=10;
    }
    printf(" %d ", res[i]);
    }
}
