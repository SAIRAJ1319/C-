#include<iostream>
using namespace std;
class student
{
	public:
		int total,roll_no,m1,m2;
		void getdata()
		{
			cout<<"student roll number:";
			cin>>roll_no;
		}
};
class test:public student
{
	public:
		void getdata1()
		{
		cout<<"enter mark in subject1=";
		cin>>m1;
		cout<<"enter mark in subject 2=";
		cin>>m2;
        }
};
class result:public test
{

	public:
		void getdata2()
		{
			total=m1+m2;
		cout<<"result of a student:"<<total;
        }
};
int main()
{
	result r;
	r.getdata();
	r.getdata1();   
	r.getdata2();
	return 0;
}
