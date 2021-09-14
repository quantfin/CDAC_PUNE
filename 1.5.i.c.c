#include<stdlib.h>
int main()
{
int number_1,number_2,temp;
printf("Enter the two numbers :");
scanf("%d%d",&number_1,&number_2);
temp=number_1;
number_1 = number_2;
number_2 = temp;

printf("After swapping number_1  = %d number_2 =%d",number_1,number_2);
return 0;


}
