#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main() 
{
    struct stat statbuf;

    stat("linux.txt", &statbuf);

    printf("INode = %d\n", (int)statbuf.st_ino);
    printf("Mode = %o\n", (unsigned int)statbuf.st_mode);

    return 0;
}
