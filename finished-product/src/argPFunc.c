#include <stdio.h>

void funcp(int (*)(int), int n);

int dbl(int);
int hlf(int);

void main(){
  funcp(dbl,8);
  funcp(hlf,8);
}

void funcp(int (*f)(int), int n)
{
  printf("arg is:%d , result is:%d\n",n,f(n));
}

int dbl(int n)
{
  return n * 2;
}

int hlf(int n)
{
  return n / 2;
}
