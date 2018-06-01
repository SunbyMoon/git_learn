#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char ch;

    if ( (fp = fopen("/haplox/users/liuming/c-study/test.txt", "r") ) == NULL) {
        printf("Cannot open file, press any key to exit!");
        getchar();
        exit(1);
    }

    while ( (ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    putchar('\n');
    fclose(fp);
    return 0;
}

