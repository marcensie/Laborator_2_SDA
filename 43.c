#include <stdio.h>
#include<stdlib.h>
int main() {
	int num,k=0,count;
	printf("\nnumarul: ");
	scanf("%d", &num);
	if (num<9999||num>999999999)
        printf("error");
	int *div;
div=(int *)calloc(100,sizeof(int));
	for(int i = 1; i <= num; i++) {
		if((num%i) == 0){
			div[k]=i;
			k++;
		}
	}
printf("numarul de divizori - %d\n cel mai mare divizor - %d",k,div[k-2]);
}
