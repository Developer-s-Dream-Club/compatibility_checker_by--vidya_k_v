#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string n1,n2,n3;
	int a,b,c,d,add;
	cout<<"name1 = ";
	cin>>n1;
	cout<<"name2 = ";
	cin>>n2;
	n3=n1+n2;
	a=count(n3.begin(),n3.end(),'l');
	b=count(n3.begin(),n3.end(),'o');
	c=count(n3.begin(),n3.end(),'v');
	d=count(n3.begin(),n3.end(),'e');
	add=a+b+c+d;
	if(add<1||add>9)
	cout<<"Your score is "<<add<<",you go together like coke and mentos."<<endl;
	else if(add>=4&&add<=5)	
	cout<<"Your score is "<<add<<",you are alright together."<<endl;
	else
	cout<<"Your score is "<<add<<endl;
	return 0;
}
	