#include<stdio.h>
int main()
{
char a[100],b[20];
printf("Enter the string: ");
gets(a);
printf("Enter the word:");
gets(b);
int i=0,k;
int j=0;
int c=0;
while(a[i]!='\0')
{
j=0;
if(a[i]==b[j])
{
k=i;
while(b[j]!='\0' && a[k]==b[j])
{
j++;
k++;
}
if(b[j]=='\0') {
c++;
i=k-1;
}
}
i++;
}
printf("%d ",c);
return 0;
}

