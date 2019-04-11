#include<stdio.h>
int main()
{
	int n;
	printf("Enter length of array: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	int positive=0,negative=0,odd=0,even=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>=0)
		positive++;
		else
		negative++;
		if(arr[i]%2==0)
		even++;
		else
		odd++;
	}
	printf("\n Positive number's count = %d",positive);
	printf("\n Negative number's count = %d",negative);
	printf("\n Even number's count = %d",even);
	printf("\n Odd number's count = %d",odd);
}

