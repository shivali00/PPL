#include<stdio.h>
int main()
{
char a[100],b[20];
printf("Enter the string :");
gets(a);
printf("Enter the string you want to search:");
scanf("%s",b);
int i,j,k;
i=0;
while(a[i]!='\0')
{
k=0;
if(a[i]==b[k])
{
j=i;
while(b[k]!='\0' && a[j]==b[k])
{
k++;
j++;
}
if(b[k]=='\0')
{
printf("Index of %s is %d",b,i);
return 0;
}
}
i++;
}
printf("Index of %s is 1 (does not exists)",b);
return 0;
}