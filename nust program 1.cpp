#include<iostream>
#include<string.h>
using namespace std;
struct information
{
	string name;
	string roll_no;
	int marks;
};
int main()
{
	information str;
	cout<<"enter your name:";
	cin>>str.name;
	cout<<"enter your rollno:";
	cin>>str.roll_no;
	cout<<"enter your marks:";
	cin>>str.marks;
	cout<<"information!"<<endl;
	cout<<"your name:"<<str.name<<endl;
	cout<<"your roll_no:"<<str.roll_no<<endl;
	cout<<"your marks:"<<str.marks<<endl;
	return 0;
}
