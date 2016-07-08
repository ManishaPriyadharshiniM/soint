# soint
#include<stdio.h>
#include<conio.h>
void main()
{
long long n;
int c=0;
printf("enter an integer\n");
scanf("%d",&n);
while(n!=0)
{
n/=10;
++c;
}
printf("the no of digits is =\n",c);
return 0;
}
