#include<stdio.h>
#include<conio.h>
int main()
{
int num,i,flag=0;
scanf("%d",&num);
for(i=2;i<num/2;++i)
{
if(n%i==0)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("prime number");
}
else
{
printf("not a prime number")
}
}

