#include <stdio.h>

//main program
int main()
{
	//variable to store values
	float basic, da, hra, tax ;
	float pf;
	float net_salary;

	//input required fields
	printf("Enter Basic Salary (inr): ");
	scanf("%f",&basic);
	printf("Enter HRA (inr): ");
	scanf("%f",&hra);
	printf("Enter TAX (inr): ");
	scanf("%f",&tax);

	//calculate DA 8% of Basic Salary
	da = (basic*8)/100;
	//calculate PF 14% of Basic salary
	pf = (basic*2)/100;


	//calculate net salary
	net_salary = basic + da + hra + tax  - pf;

	//printing Net salary
	printf("Net Salary is: inr %.02f\n",net_salary);

	return 0;
}
