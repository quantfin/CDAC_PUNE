#include <stdio.h>
int main()
{
    int a = 10, b = 20;
    a = a + b; // a now becomes 30
    b = a - b; // b becomes 10
    a = a - b; // a becomes 20
    printf("After Swapping: a = %d, b = %d", a, b);
    return 0;
}
