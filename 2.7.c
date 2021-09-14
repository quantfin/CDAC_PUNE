#include<stdlib.h>
int main()
{
int l1,l2,l3;
printf("Enter all three angles of a triangle");
scanf("%d%d%d",&l1,&l2,&l3);

if(l1+l2+l3==180)
{
printf("Triangle is valid");
}
else
printf("Triangle is invalid");
return 0;
}
