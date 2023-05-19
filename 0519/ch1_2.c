#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

extern int erron;

int main() {
    FILE *fp; //구조체 변수 

    if((fp=fopen("test.txt", "r")) == NULL) {
        printf("errno=%d\n", errno);
        exit(1);
    }
    fclose(fp);
}
