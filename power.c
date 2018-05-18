#include <stdio.h>

int power(int base, int n)
{
    int i;
    int p = 1;
    for (i=1; i <= n; i++)
        p = p * base;
    return p;
}


void main()
{
    int i;
    for (i=1; i < 10; i++)
        printf("%d\n",power(2, i));
}
