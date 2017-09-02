#include<stdio.h>
#include<conio.h>
int main()
{
int num,originalnum,remainder,result=0,
scanf("%d",&num);
originalnum=num;
while(originalnum!=0)
{
remainder=originalnum%10;
result+=remainder*remainder*remainder;
originalnum/=10;
}
if(result==num)
{
printf("armstrong number");
else
{
printf("not an armstrong number");
}
}





