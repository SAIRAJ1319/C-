#include<iostream>
using namespace std;
class add
{
	int x,y;
	public:
		void input();
		void output ();
};
void add :: input()
{
	cout<<"enter the first number";
	cin>>x;
	cout<<"enter the second number";
	cin>>y;
}
void add :: output ()
{
	cout<<"sum of two numbers is :-"<<x+y;
}
int main ()
{
	add a;
	a.input();
	a.output();
	return 0;
}


