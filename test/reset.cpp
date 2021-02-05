#include "reset.h"
#include <iostream>

using namespace std;

void reset(int &i)
{
	i=65535;
}

void reset(const int &i)
{
	cout<<"this is const!"<<endl;
}

rtest returnrtest()
{
	cout<<"constructor in member function!"<<endl;
	rtest c{"hello,world!"};
	
	return c; 
	//return {"hello,world!"};
}

string operator+(const rtest& s1,const rtest& s2)
{
	cout<<"operator+"<<endl;
	return s1.getrtests()+"  "+s2.getrtests();
}

