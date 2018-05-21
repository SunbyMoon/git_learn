#include <stdio.h>

/* define the function of copying  str1 to str2, using the array. */
void strcpy1(char *s, char *t)
{
    int i;
    i = 0;
    while ((s[i] = t[i]) != '\0')
        i++;
}

/* define the function of copying str1 to str2, using the pointer. */
void strcpy2(char *s, char *t) 
{
    while ((*s = *t) != '\0') {
        s++;
        t++;
    }
    /* the more concise expression 
       { while (*s++ = *t++)
        ; }  */
}

/* define the function of comparing str1 to str2, using the array. */
int strcmp1(char *s, char *t)
{
    int i;
    for (i = 0; s[i] == t[i]; i++)
        if (s[i] == '\0')
            return 0;
    return s[i] - t[i];
}

/* define the function of comparing str1 to str2, using the pointer. */
int strcmp2(char *s, char *t)
{
    for (; *s++ = *t++;)
        if (*s == '\0')
            return 0;
    return *s - *t;
}

int main()
{
    char m[] = "How are you?";
    char n[100] = {"\0"};
    {
        strcpy1(n, m);
        printf("%s\n", n);
    }
    char s[] = "How are you";
    {
        printf("%d\n", strcmp1(m, s));
    }
}
