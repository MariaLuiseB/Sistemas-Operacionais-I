#include "stdio.h"
#include "unistd.h" // inclui as chamadas de sistema, inclusive o getpid

int main() {
    // imprime o id do processo
    printf("meu PID: %d\n", getpid());
    return 0;
}