#include <stdio.h>

// this function returns the reference of the higher variable back
int& return_high(int &a, int &b)
{
    if (a > b)
    {
        return a;
    }
    else 
    {
        return b;
    }
}

int main(void)
{
    int num1 = 5;
    int num2 = 10;
    printf("initially the numbers are:\nnum1 = %i\tnum2 = %i\n", num1, num2);
    
    // the reference of the higher variable will be set to 100 and displayed
    return_high(num1, num2) = 100;
    printf("after function, the numbers are:\nnum1 = %i\tnum2 = %i\n", num1, num2);
}