#include<stdlib.h>
int main()
{
int n;

printf("Enter any number:");
scanf("%d",&n);

if((n%5==0 ) && (n%7 == 0))
{
printf("Number is divisible by 5 and 11");
}
else
{
printf("Number is not divisible by 5 and 7");
}
return 0;
}
