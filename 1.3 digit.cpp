#include<iostream>
using namespace std;
int main()
{int t,n,s=0,a,b;
cin>>n;
while(n>0)
{	a=n%10;
	s=s+a;
	n=n/10;
}
cout<<s;
	return 0;
}

