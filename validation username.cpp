#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
main ()
{
	//clrscr();
	char str1[100],str2[100];
	cout<<"enter the string";
	cin>>str1;
	cout<<"enter the string again";
	cin>>str2;
	if(str1==str2)
	cout<<"it is valid";
	else
	cout<<"it is invalid";
	getch();
}
