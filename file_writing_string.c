#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp;
    char str[102] = {0}, strTemp[100];
    
    if ( (fp=fopen("/haplox/users/liuming/c-study/test.txt", "at+")) == NULL) {
        printf("Cannot open file, press any key to exit!\n");
        getchar();
        exit(1);
    }

    printf("Input a string:");
    fgets(strTemp, sizeof(strTemp), stdin);
    strcat(str, "\n");
    strcat(str, strTemp);
    fputs(str, fp);
    fclose(fp);
    return 0;
}

