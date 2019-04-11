#include<stdio.h>
int main()
{
char a[100],b[20],c[20],d[200];
printf("Enter the string:");
gets(a);
printf("Enter the old string:");
gets(b);
printf("Enter the new string:");
gets(c);
int i=0,k,l;
int j;
l=0;
while(a[i]!='\0')
{
j=0;
if(a[i]==b[j])
{
k=i;
while(a[k]==b[j] && b[j]!='\0')
{
k++;
j++;
}
if(b[j]=='\0')
{
j=0;
while(c[j]!='\0')
{
d[l]=c[j];
j++;
l++;
i=k;
}
}
}
d[l]=a[i];
l++;
i++;
}
printf("%s",d);
return 0;
}

