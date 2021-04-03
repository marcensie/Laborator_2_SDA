#include <stdio.h>
#include<stdlib.h>
int main()
{
  int num, i=3, x;
  printf("numarul - ");
  scanf("%d", &num);
  printf("2\n");
int *n;
n=(int *)calloc(1,sizeof(int));
  for (n[0] = 2; n[0] <= num;)
  {
    for (x = 2; x<= i-1; x++)
    {
      if (i%x == 0)
        break;
    }
    if (x == i)
    {
      printf("%d\n", i);
      n[0]++;
    }
    i++;
  }
}
