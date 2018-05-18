#include <stdio.h>

/* the function: calculate the average of two numbers
   the parameters: int x, the first input parameter number
                   int y, the second input parameter number
   the return:  the average
*/

int Average(int x, int y)
{
    int ave = (x + y)/2;
    return ave;
}

void main()
{    
    int a = 12;
    int b = 24;
    int ave = Average(a, b);
    printf("the average of %d and %d is %d.\n",a, b, ave);
}

