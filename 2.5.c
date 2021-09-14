#include <stdio.h>
#include <conio.h>
void main()
{
float income,tax;
printf("Enter Income of person : ");
scanf("%f",&income);
if (income<=150000.)
tax=0;
else if (income<=300000.00)
tax=(income-150000.00)*20/100;
else
tax=(income-300000.00)*30/100;



printf("Income = %f \n",income);
printf("TAX = %f \n",tax);
}
