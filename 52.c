#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ptr;
	ptr=(int *)calloc(10,sizeof(int));
for (int i=1; i<10 ;i++)
{
        ptr[i]=i;
}
    for (int i = 1; i <= 9; i++) {
        for (int j = i+1; j <= 9; j++) {
            for (int k = j+1; k <= 9; k++) {
                printf("%d%d%d\n", ptr[i], ptr[j], ptr[k]);
            }
        }
    }
}
