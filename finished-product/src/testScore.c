#include <stdio.h>

int main(){
  int score = 0;

  do {
    printf("input test score: ");
    scanf("%d",&score);
  } while (!(0 <= score && score <= 100));

  printf("%d\n",score);
}
