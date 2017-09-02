#include<stdio.h>
int main()
{
int exponent,base,result=1;
scanf("%d%d",&base,&exponent);
while(exponent!=0)
{
result=result*base;
--exponent;
printf("%d",result);
}
