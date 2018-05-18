#include <stdio.h>

int Average(int x, int y);      /*state the Average() function */
int main()
{   
    int a = 12;
    int b = 24;
    int ave = Average(a, b);
    printf("Average of %d and %d is %d.\n", a, b, ave);
}


/*
    the function:  calculate the average of two numbers
    theparameters: int x, the first number destored
                   int y, the second number destored
    the return:    the average
*/
int Average(int x, int y)
{
    int result;
    result = (x + y)/ 2;
    return result;
}


