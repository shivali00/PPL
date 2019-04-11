#include<stdio.h>
int main()
{
int n,pos;
char a[100],b[100];
printf("Enter the string:");
gets(a);
printf("Enter the position:");
scanf("%d",&pos);
printf("Enter n:");
scanf("%d",&n);
int i=0,k;
while(a[i]!='\0')i++;
if(n<=0 || pos<0 || pos>i) 
{
printf("Invalid data");
return 0;
}
k=0;
i=0;
while(a[i]!='\0')
{
if(i==pos)
{
while(n>0) 
{
i++;
n--;
}
}
b[k]=a[i];
k++;
i++;
}
b[k]='\0';
printf("%s",b);
return 0;
}

