#include <stdio.h>
#include "function.h"

int main()
{
  printf("before change value:%d\n",LABEL);
  LABEL=8;
  printf("after change value:%d\n",LABEL);
  printf("%f\n",add(1.5,2.3));
  return 0;
}
