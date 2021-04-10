#include <stdio.h>

int main()
{
  int min,max,sum;

  /* input block */
  printf("please input \"min,max\": ");
  scanf("%d,%d",&min,&max);

  /* calc block */
  sum = (min + max) * (max - min + 1) / 2;

  /* output block */
  printf("the sum of %d to %d is %d\n",min,max,sum);
  return 0;
}
