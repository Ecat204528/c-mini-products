#include <stdio.h>

int main(){
  int r;
  double s;

  /* input block */
  do {
    printf("what is the radius?: ");
    scanf("%d",&r);
  } while (r < 0);

  /* diaplay block */
  s = r * 3.14;
  printf("area is %f\n",s);

  return 0;
}
