#include <stdio.h>
#include <stdlib.h>

#define N 100

int main()
{
    FILE *fp;
    char str[N+1];
    if ( (fp=fopen("/haplox/users/liuming/c-study/test1.txt", "rt")) == NULL) {
        printf("Cannot open file, press any key to exit!\n");
        getchar();
        exit(1);
    }

    while (fgets(str, N, fp) != NULL) {
        printf("%s", str);
    }
    fclose(fp);
    system("pause");
    return 0;
}
