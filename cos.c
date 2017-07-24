#include<stdio.h>
#include<conio.h>
void main()
{
char c;
printf("enter the number");
scanf("%c",&c);
if(c='a'||c='e'||c='i'||c='o'||c='u'||c='A'||c='E'||c='I'||c='O'||c='U')
{
printf("the character is vowel");
}
else
{
printf("the character is consonant");
}
}
