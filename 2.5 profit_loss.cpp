#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{int cp,sp,loss,profit;
float loss_percent,profit_percent;
cin>>cp>>sp;
if(cp>sp)
{loss=cp-sp;
cout<<"Loss = "<<loss<<endl;
	loss_percent=(loss*100)/cp;
	cout<<"loss% = "<<loss_percent<<"%";
}
else if(sp>cp)
{profit=sp-cp;
cout<<"Profit = "<<profit<<endl;
	profit_percent=(profit*100)/cp;
	cout<<"profit% = "<<profit_percent<<"%";
}
	return 0;
}

