#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
		int a,b;
		printf("Enter two numbers: ");
		scanf("%d%d",&a,&b);
		char op;
	do
	{
		printf("+\n");
		printf("-\n");
		printf("*\n");
		printf("/\n");
		printf("%%\n");
		printf("Q to exit\n");
		printf("Enter your choice: ");
		cin>>op;		
		switch(op)
		{
			case '+':
				printf("Answer: %d\n",a+b);
				break;
			case '-':
				printf("Answer: %d\n",a-b);
				break;
			case '*':
				printf("Answer: %d\n",a*b);
				break;
			case '/':
				printf("Answer: %d\n",a/b);
				break;
			case '%':
				printf("Answer: %d\n",a%b);
				break;
		}
	}while(op!='Q');	
}

