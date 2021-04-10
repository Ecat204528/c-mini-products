#include <stdio.h>

int main()
{
  int year;

  // enter block
  printf("this program will tell you if there is an Olympic Games that year.\nplease enter year(sample-> \"~: 2000\"): ");
  scanf("%d",&year);

  // calc and display block
  if(year % 4 == 0) printf("there is an Olympic Games in %d AD\n", year);
  else printf("there is not an Olympic Games in %d AD.\n", year);
  printf("thank you for used! please contine to use.\n");
  return 0;
}

