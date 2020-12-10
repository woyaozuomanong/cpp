#include <iostream>
#include <vector>
#include<typeinfo>
#define VALUE 5

int main()
{
  std::vector<int> a{1,2,3,4,5};
  for(auto i=0;i<a.size();i++)
  //for(unsigned int i=0;i<a.size();i++)
	  std::cout<<a[i]<<std::endl;
  int j=-VALUE;
  auto &r=j;
  auto &&s=r*2;
  int &&t=std::move(s);

  std::cout<<typeid(t).name()<<std::endl;
  std::cout<<"t="<<t<<std::endl;
  std::cout<<r<<"  "<<s<<std::endl;
  std::cout<<j<<std::endl;
  std::cout<<&r<<"  "<<&s<<" "<<&j<<std::endl;


  t=8;
  std::cout<<t<<"  "<<s<<std::endl;
  s=9;
  std::cout<<t<<"  "<<s<<std::endl;

  int &ijk=j;
  ijk=s;
  std::cout<<ijk<<"  "<<j<<std::endl;  
  return 0;
}
