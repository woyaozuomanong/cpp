#include <iostream>

int main()
{
  const r1=12;
  int &r2=r1*2;
  std::cout<<r2<<std::endl;
  return 0;
}
