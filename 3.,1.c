#include<stdlib.h>
#include<stdio.h>
void main()
{
    int ch;
    printf("Enter digits (0-9): ");
    scanf("%d",&ch);
    switch(ch)
    {
case 0 : printf("0\n");
         printf("ZERO");

case 1 : printf("\n 1\n");
         printf("\n ONE");
         break;
case 2 : printf("\n 2\n");
         printf("\n TWO");
         break;
case 3 : printf("\n 3\n");
         printf("THREE");
         break;
case 4 : printf("\n 4\n");
         printf("\n FOUR");
         break;
case 5 : printf("\n 5\n");
         printf("\n FIVE");
         break;
case 6 : printf("\n 6\n");
         printf("SIX");
         break;
case 7 : printf("\n 7\n");
         printf("\n SEVEN");
         break;
case 8 : printf("\n 8\n");
         printf("\n EIGHT");
         break;
case 9 : printf("\n 9\n");
         printf("NINE");
         break;
default: printf("Invalid Digits\n Please try again....\m");
         break;
    }
}
