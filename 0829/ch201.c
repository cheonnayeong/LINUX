#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    if (mkdir("han", 0755) == -1) { //mkdir() 함수 수행 , 실패시 -1 출력
        perror("han");
        exit(1);
    }

    printf("sucess!!\n"); //성공시 sucess 출력 

    return 0;
}
