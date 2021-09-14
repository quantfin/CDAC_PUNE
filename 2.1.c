#include<stdlib.h>
int main()
{
int h,r;
float SA,V;
printf("Enter the radius and height of the cylinder:");
scanf("%d%d",&r,&h);
SA =2*(3.14)*r*r;

V=(3.14)*r*r*h;

printf("The surface area is:%.3f \n",SA);
printf("The volume is: %.3f",V);
return 0;
}
