#include <stdio.h>
#include <unistd.h> // inclui as chamadas de sistema, inclusive o getpid
#include <sys/types.h>
#include <stdlib.h>
#include <sys/wait.h>


int main() {
    pid_t id = fork();
    
    if(id < 0) {
        printf("[ERRO] Erro ao criar o processo.\n");
        return 1;
    }
    if(id == 0) {
        // Processo filho
        execlp("/usr/bin/ls", "ls", "-l", NULL);
        perror("[ERRO] execlp falhou.\n");
        return 1;
    } else {
        //Processo Pai
        printf("[PROCESSO PAI] processo pai chegando ao fim ...\n");
    }

    return 0;
}
