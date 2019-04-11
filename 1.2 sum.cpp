#include<iostream>
using namespace std;
int add(int, int);
int main() 
{
	int a,b,sum;
	cout<<"enter two numbers:";
	cin>>a>>b;
	sum=add(a,b);
	cout<<endl<<sum;
	return 0;
}
int add(int a,int b)
{
	int sum,carry; 
	if (b == 0) 
	return a;
	else
	sum = a^b;
	carry = (a&b) << 1;
	return add(sum,carry);
}

