#include<iostream>
using namespace std;
class student{
	int i,m1,m2,m3,total,avg,reg_no;
	string name;
	public:
		void input();
		void calculate();
		void display();
};
void student :: input()
{
	cout<<"enter name:"<<endl;
	cin>>name;
	cout<<"enter reg.no:"<<endl;
	cin>>reg_no;
	cout<<"enter marks m1,m2,m3:"<<endl;
	cin>>m1>>m2>>m3;
}
    void student :: calculate()
    {
    	total=m1+m2+m3;
    	avg=total/3;
    }
    void student :: display()
    {
    cout<<"stdnt name:"<<name;
    cout<<"\nstudent reg.no:"<<reg_no;
    cout<<"\nmark1"<<m1<<"\nmark2"<<m2<<"\nmark3"<<m3;
    cout<<"\ntotalamrks:"<<total<<endl;
    cout<<"\naverage of marks:"<<avg<<endl;
}
int main()
{
	student a;
	a.input();
	a.calculate();
	a.display();
	return 0;
	}
