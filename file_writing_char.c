#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char ch;

    if ((fp = fopen("/haplox/users/liuming/c-study/test.txt", "wt+")) == NULL) {
        printf("Cannot open file, press any key to exit!\n");
        getchar();
        exit(1);
    }

    printf("Input a string:\n");

    while ((ch = getchar()) != '\n') {
        fputc(ch, fp);
    }
    
    fclose(fp);
    return 0;
}
