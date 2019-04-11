#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int m = n;
	int r,sum = 0;
	while(m > 0)
	{
		r = m % 10;
		sum = sum + (r*r*r);
		m = m / 10;
	}
	if(sum == n)
	printf("%d is an armstrongnumber!",n);
	else
	printf("%d is not an armstrongnumber!",n);
}

