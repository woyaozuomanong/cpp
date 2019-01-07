#include "print.h"

auto print(int i)-> int (*)[5]
{
  int rarray[5]={i,i+1,i+2,i+3,i+4};
  auto c=&rarray;
  return c;
}

int &returnx(int &x)
{
  x*=2;
  return x;
}

int returnx(int x)
{
  x-=2;
  return x;
}
