#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{int t,n,s,a,b;
cin>>n;
a=0;
b=1;
cout<<0<<" "<<1<<" ";
while(n-2>0)
{
	s=a+b;
	b=s;
	a=s-a;
	cout<<s<<" ";
	n--;
}
	return 0;
}

