#include <iostream>
#include <vector>

using namespace std;

class base
{
		friend string operator+(const base& b1,const base& b2){return b1.s+b2.s;};
	public:
		base():s("hello,world!"){cout<<"default constructor"<<endl;};
		base(string s1):s(s1){cout<<"para constructor"<<endl;};
		base(const base& b1):s(b1.s){cout<<"copy constructor"<<endl;};
		base(base&& b1)noexcept:s(b1.s){b1.s.clear();cout<<"move constructor"<<endl;};
		bool operator==(const base& b2)const {return s==b2.s;};
		bool operator<(const base& b2)const {return s<b2.s;};
		bool operator>(const base& b2)const {return s>b2.s;};

		virtual void my_out(){cout<<"out of base:  "<<s<<endl;};

		virtual	~base(){cout<<"destructor"<<endl;};
	private:
		string s;
};

class deprive:public base
{
	public:
		deprive():base(),vs({"good","morning"}){cout<<"depv default constructor"<<endl;};
		void my_out()override 
		{
			cout<<"out of deprive:  ";
			for(auto i : vs)
				cout<<i<<endl;
		};
		void depv_out()
		{
			for(auto i : vs)
				cout<<i<<endl;
		};
		~deprive()override {cout<<"depv destructor"<<endl;};
	private:
		vector<string> vs;
};


template<typename T>
bool my_equal(const T& t1,const T& t2)
{
	return t1==t2;
}

template<typename T>
bool my_less(const T& t1,const T& t2)
{
	return t1<t2;
}

template<typename T>
bool my_greater(const T& t1,const T& t2)
{
	return t1>t2;
}

int main()
{
	cout<<!my_equal(5,6)<<endl;

	base b1;
	cout<<my_equal(b1,base("this"))<<endl;
	cout<<my_less(b1,base("this"))<<endl;
	cout<<my_greater(b1,base("this"))<<endl;

	b1.my_out();
	
	deprive b2;
	base& rb=b2;
	
	rb.my_out();

	base* rbs=new deprive;
	delete rbs;

	cout<<(string("that")+b1)<<endl;
	return 0;
}
