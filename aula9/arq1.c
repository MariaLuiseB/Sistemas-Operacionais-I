#include <unistd.h>
#include <sys/types.h>
#define BUFSIZE 1024

int main() {
    char buf[BUFSIZE];
    int n;
    int fd = open("arq1.c", O_RDONLY); // fd eh o numero de onde está o arquivo
    while((n = read(0, buf, BUFSIZE)) > 0)
        write(1, buf, n);
    return 0;
}