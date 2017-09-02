#include<stdio.h>
#include<conio.h>
int main()
{
int i,number,sum=0;
scanf("%d",&number);
for(i=1;i<=number;i++)
{
sum=sum+i;
printf("sum of n numbers=%d",sum);
}
}
