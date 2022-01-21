#include<iostream>
#include<cmath>
//sqrt((x2-x1)^2+(y2-y1)^2).
using namespace std;
struct carstesian
{
	int x1;
	int x2;
	int y1;
	int y2;
};
int main()
{
	carstesian str;
	cout<<"enter the value of x1:";
	cin>>str.x1;
	cout<<"enter the value of x2:";
	cin>>str.x2;
	cout<<"enter the value of y1:";
	cin>>str.y1;
	cout<<"enter the value of y2:";
	cin>>str.y2;
	cout<<endl;
	cout<<"the value of x1:"<<str.x1<<endl;
	cout<<"the value of x1:"<<str.x2<<endl;
	cout<<"the value of x1:"<<str.y1<<endl;
	cout<<"the value of x1:"<<str.y2<<endl;
	cout<<"the cartesian"<<endl;
	cout<<sqrt((str.x2-str.x1)*(str.x2-str.x1)+(str.y2-str.y1)*(str.y2-str.y1))<<endl;
	return 0;
}
