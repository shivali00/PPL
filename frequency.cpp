#include<stdio.h>
int main()
{
	int n;
	printf("Enter length of the array: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	int num;
	printf("Enter the element whose frequency is to be calculated ");
	scanf("%d",&num);
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==num)
		count++;
	}
	printf("Number '%d' appeared %d times!",num,count);
}

