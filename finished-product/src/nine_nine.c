#include <stdio.h>

int main(){
  int x,y,a;
  for(x = 1; x <= 9; x++){
    for(y = 1; y <= 9; y++){
      if(y == 9){
        printf("%d\n", x * y);
      } else {
        printf("%d,\t", x * y);
      }
    }
  }
  return 0;
}

