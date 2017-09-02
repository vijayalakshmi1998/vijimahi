#include<stdio.h>
#include<conio.h>
int main()
{
int num,remainder,reversedInteger,originalInteger;
scanf("%d",&num);
originalInteger=num;
while(num!=0)
{
remainder=n%10;
reversedInteger=reversedInteger*10+remainder;
n=n/10;
}
if(reversedInteger==originalInteger)
{
printf("palindrome");
}
else
{
printf("not a palindrome");
}
}
