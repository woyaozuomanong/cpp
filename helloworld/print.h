#include <iostream>
#include <vector>
#include <string>
#include <initializer_list>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::initializer_list;


auto print(int i)-> int (*)[5];


class window{
  public:
    void setvalue(string::size_type);
};

class monitor{
  public:
    using pos=string::size_type;
    friend void window::setvalue(pos size);
    monitor(pos i):size(i){};
  private:
    pos size;
};

void window::setvalue(string::size_type size)
{
  string::size_type sizetwo=2*size;
  cout<<"sizetwo="<<sizetwo<<endl;
}
