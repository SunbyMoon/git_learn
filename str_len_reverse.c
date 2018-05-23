#include <stdio.h>

/* define a function counting the length of a string using array. */
int strlen1(char str1[])
{
    int i;
    int len = 0;
    for (i = 0; str1[i] != '\0'; i++)
    {    
        len++;
    }
    return (len);
}

/*define a function counting the length of a string using the string pointer. */
int strlen2(char *p)
{
    int len = 0;
    for (; *p != '\0'; p++)
    {
        len++;
    }
    return (len);
}

/* define a function reverse a string using the string pointer. */
void strrev(char *str)
{
    char *start, *end, temp;
    start = str;
    end = start + strlen2(str) - 1;
    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main()
{
    char str[] = "Hello, world!";
    {
    strrev(str);
    puts(str);
    printf("%d\n", strlen2(str));   
    }
}

