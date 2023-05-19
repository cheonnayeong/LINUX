#include <stdio.h>
#include <unistd.h>
#include <errno.h>

extern int errno;

int main() {
    if(access("test.txt", F_OK) == -1) {
        printf("errno=%d\n", errno);
        return -1;
    }
    printf("성공했어요\n");
    return 0;
}
