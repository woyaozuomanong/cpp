#include <iostream>
#include <vector>

using namespace std;

void reset(int &i);
void reset(const int &i);

class rtest
{
	public:
		rtest():s("hello"){cout<<"default constructor"<<endl;} ;
		rtest(const string& oris):s(oris){cout<<"para constructor"<<endl;};
	        rtest(const rtest  &source):s(source.s){cout<<"copy constructor"<<endl;};	
		rtest& operator=(const rtest& source)
		{
			s=source.s;
			cout<<"copy operator="<<endl;
			return *this;
		};

		rtest& operator+=(const rtest& source)
		{
			s=s+","+source.s;
			cout<<"operator +="<<endl;
			return *this;
		};


		rtest(rtest &&source) noexcept
			:s(source.s)
			{
				source.s="";
				cout<<"move constructor"<<endl;
			}

		rtest& operator=(rtest &&source) noexcept
		{
			if(this!=&source)
			{
				s=source.s;
				source.s="";
			}

			cout<<"move operator="<<endl;
			return *this;
		}

		~rtest(){cout<<"destructor"<<endl;};

                string getrtests() const {return s;};

	private:
			string s;
};


rtest returnrtest();

string operator+(const rtest&,const rtest&);
