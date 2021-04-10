#include <stdio.h>

int main(){
  int oko,month;
  oko = 1;
  month = 1;
  while(oko <= 1000000){
    oko *= 2;
    month++;
    printf("in %d month, now money:%d\n", month, oko);
  }
  return 0;
}

