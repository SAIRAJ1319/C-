#include<iostream>
using namespace std;
class student{
	int no;
	char *name;
	public:
		student();
		student(int,char*);
		void display();
	};
	
	student :: student()
	{
		no = 0;
		name="unknown";
	}
	student::student(int x,char* y)
	{
		no=x;
		name=y;
	}
	void student::display()
	{
		cout<<"\nreg.no:"<<no;
		cout<<"\nname:"<<name;
	}
	int main()
	{
		student s;
		s.display();
	    student s1(123,"hemu");
	    s1.display();
		
	
		return 0;	
	}
