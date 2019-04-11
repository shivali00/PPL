#include<stdio.h>
int main()
{
char a[100];
printf("Enter a string :");
scanf("%s",a);
int e,f;
e=0;
f=0;
while(a[f]!='\0') f++;
f--;
while(e<f)
{
if(a[e]!=a[f])
{
printf("Not a Palindrome");
return 0;
}
e++;
f--;
}
printf("Palindrome");
return 0;
}

