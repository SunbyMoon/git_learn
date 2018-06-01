#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    if ((fp=fopen("/haplox/users/liuming/c-study/test3.txt", "rb")) == NULL) {
        printf("Error on open /haplox/users/liuming/c-study/test3.txt file!");
        getchar();
        exit(1);
    }
    
}
