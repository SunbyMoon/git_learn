#include <stdio.h>

int main()
{
    FILE *fp = NULL;
    fp = fopen("/haplox/users/liuming/c-study/book_study/test.txt", "w+");
    fprintf(fp, "This is testing for fprintf...\n");
    fputs("This is testing for fputs...\n", fp);
    fclose(fp);
}
