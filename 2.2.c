#include<stdlib.h>
int main()
{
float C;
float F,K;
printf("Enter the temperature in fahrenheit:");
scanf("%f",&F);
C= (F - 32) / 1.8;
K = C + 273.15;
printf("Temperature in kelvin : %.3f",K);
printf("Temperature in celcius: %.3f" ,C);

return 0;
}
