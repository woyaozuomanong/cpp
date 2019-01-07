#include "print.h"


int main()
{
  typedef char (*p) [5];
  char c[2][5]={"abcd","efgh"};
  p pt=c;
  cout<<pt[1]<<endl;

  using q=char (*)[5];
  q qt=c+1;
  cout<<sizeof(q)<<endl;
  cout<<*(qt-1)<<endl;

  cout<<"ghijk"[2]<<endl;


  auto parray=print(4);
  cout<<parray<<endl;
  cout<<sizeof(parray)<<endl;
  cout<<*parray<<endl;
  cout<<(*parray)[2]<<endl;
  cout<<sizeof(*parray)<<endl;
  cout<<sizeof((*parray)[2])<<endl;

  int im[5]{3,6,8,2,0};
  using pm5=int (*)[5];
  pm5 pmi=&im;
  cout<<pmi<<endl;
  auto pim=&im;
  cout<<*(*pim)<<endl;
  cout<<im<<endl;

  vector<string> s{"hello","world"};
  for(auto c:s)
    cout<<c<<endl;
  return 0;

  class window mywindow;
  class monitor mymonitor(6);
  mywindow::setvalue(mymonitor::size);

}
