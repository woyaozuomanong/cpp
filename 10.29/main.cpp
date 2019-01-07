#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{

  ifstream fi("../const.cpp");
  if(!fi)
  {
    cout<<"open file error!"<<endl;
    exit(0);
  }

  istream_iterator<string> is_in(fi);
  istream_iterator<string> eof; 
  vector<string>  vs(is_in,eof);

  for_each(vs.cbegin(),vs.cend(),[](string s)->void {cout<<s<<"  ";});
  cout<<endl;
  return 0;
}
