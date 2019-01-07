#include <iostream>

int main()
{
  const int r1=12;
  //double r1=12.3;
  const int &r2=2*r1*2;
  //int &r2=2*r1*2;   //r1 is const variable, r2 must be const reference
  //or error will happen
  std::cout<<r2<<std::endl;
  std::cout<<&r1<<std::endl;
  std::cout<<&r2<<std::endl;
  return 0;
}
