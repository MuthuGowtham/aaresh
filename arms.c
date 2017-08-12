#include<stdio.h>
int main()
{
int number,original number,remainder,result=0;
printf("enter a three digit number");
scanf("%d",&number);
original number=number;
while(original number!=0)
{
remainder=originalnumber%10;
result +=remainder*remainder*remainder;
originalnumber /=10;
}
if(result == number)
printf("%d is an armstrong number.",number);
else
printf("%d is not an armstrog number.",number);
return 0;
}
