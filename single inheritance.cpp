#include<iostream>
using namespace std;
class P{
	int x=10;
	public:
     	void getdata()
	   {   
		   cout<<"\nx value is"<<x;
		}
		   
   };
class C:public P
	{
		int y=5;
		public:
		void getdata1()
		{
			cout<<"\ny value is"<<y;
		}
			
	};
int main()
{
	C c;
	c.getdata1();
	c.getdata();
	return 0;
}
