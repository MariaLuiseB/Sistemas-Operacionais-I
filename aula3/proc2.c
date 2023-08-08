#include "stdio.h"
#include "unistd.h" // inclui as chamadas de sistema, inclusive o getpid

int main() {
    // imprime o id do processo
    printf("Criando um novo processo...");

    int pid = fork(); // cria um novo processo
    if(pid < 0) {
        printf("[ERRO] Erro ao criar o processo.\n");
        return 1;
    }
    if( pid == 0) {
        // Processo filho
         printf("[PROCESSO FILHO] pid do filho: %d\n", getpid());
    } else {
        //Processo Pai
        printf("[PROCESSO PAI] pid do pai: %d\n", getpid());
    }

    return 0;
}