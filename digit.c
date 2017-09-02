#include<stdio.h>
#include<conio.h>
int main()
{
int n,count=o;
scanf("%d",&n);
while(n!=0)
{
n=n/10;
++count;
}
printf("number of digits:%d",count);
}
