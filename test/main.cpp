#include <iostream>
#include <string>
#include "reset.h"
using namespace std;


int main()
{
	int j=4;
	cout<<"j="<<j<<endl;
	reset(j);
	cout<<"j="<<j<<endl;

	const int i=8;
	int k=i;
	cout<<k<<endl;
	reset(k);
	cout<<k<<endl;

        const int *p=&i;

	rtest b;
	cout<<b.getrtests()<<endl;
	rtest a("world");
	cout<<a.getrtests()<<endl;
	b+=a;
	cout<<b.getrtests()<<endl;
	rtest c(returnrtest());
	cout<<&c<<"  "<<c.getrtests()<<endl;

	std::string s="abcd";
	cout<<&s<<endl;
	s="";
	cout<<&s<<endl;

        cout<<b+a<<endl;

	return 0;
}
