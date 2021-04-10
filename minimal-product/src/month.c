#include <stdio.h>

int main(){
  int mouth;
  char reply;
  printf("input month: ");
  scanf("%d",&mouth);

  switch (mouth) {
    case 1:
      printf("mutsuki\n");
      break;
    case 2:
      printf("kisaragi\n");
      break;
    case 3:
      printf("yayoi\n");
      break;
    case 4:
      printf("uduki\n");
      break;
    case 5:
      printf("satsuki\n");
      break;
    case 6:
      printf("minatsuki\n");
      break;
    case 7:
      printf("fumiduki\n");
      break;
    case 8:
      printf("haduki\n");
      break;
    case 9:
      printf("nagatsuki\n");
      break;
    case 10:
      printf("kannaduki\n");
      break;
    case 11:
      printf("shimoduki\n");
      break;
    case 12:
      printf("shiwasu\n");
      break;
    default:
      printf("sorry, this number is not month. try?[yn]: ");
      scanf("%c",&reply);
      if(reply == 'y')
        main();
  }
return 0;
}
