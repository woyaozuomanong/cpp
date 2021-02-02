#include <iostream>
#include <string>

using namespace std;

class base
{
	public:
		base(i=3):j(4){cout<<"default constructor"<<endl;};
	private:
		int i;
		int j;
};


class deprive:public base
{
	public:
		using base::base;
	private:
		string s;
};

int main()
{
	base b;
	deprive d(8);
	return 0;
}
