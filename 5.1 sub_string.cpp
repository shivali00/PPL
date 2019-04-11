#include<stdio.h>
int main()
{
char a[200],b[50],c[250];
printf("Enter the string: ");
gets(a);
printf("Enter the sub string: ");
gets(b);
int pos;
printf("Enter the position:");
scanf("%d",&pos);
int i,j,k;
i=0;
while(a[i]!='\0')i++;
if(i<pos || pos<0) 
{
printf("Invalid position\n");
return 0;
}
k=0;
i=0;
while(a[i]!='\0')
{
if(i==pos)
{
j=0;
while(b[j]!='\0')
{
c[k]=b[j];
k++;
j++;
}
c[k++]=' ';
c[k++]=a[i];
i++;
continue;
}
c[k]=a[i];
i++;
k++;
}
c[k]='\0';
printf("%s",c);
return 0;
}
