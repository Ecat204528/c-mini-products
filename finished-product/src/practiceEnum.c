#include <stdio.h>

int main()
{
  enum YoN{
    thereIsOG,
    thereIsNotOG,
  };
  int year;

  // enter block
  printf("Enter year : ");
  scanf("%d",&year);

  // calc and display block
  if(year % 4 == 0){
    printf("That year there is Olympic.\n");
    return thereIsOG;
  } else {
    printf("That year there is not Olympic.\n");
    return thereIsNotOG;
  }
  return 0;
}

