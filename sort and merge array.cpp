#include<stdio.h>
int main()
{
	int n,m;
	printf("Enter the length of first array: ");
	scanf("%d",&n);
	printf("Enter the length of second array: ");
	scanf("%d",&m);
	int a[n],b[m],c[n+m];
	printf("Enter the elements of first sorted array: ");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter the elements of second sorted array: ");
	for(int i=0;i<m;i++)
		scanf("%d",&b[i]);
	int i=0,j=0,k=0;
	while(i<n && j<m)
	{
		if(a[i]<b[j])
		c[k++] = a[i++];
		else
		c[k++] = b[j++];
	}
	while(i<n)
	{
		c[k++] = a[i++];
	}
	while(j<m)
	{
		c[k++] = b[j++];
	}
	for(int x=0;x<n+m;x++)
		printf("%d ",c[x]);
	return 0;
}

