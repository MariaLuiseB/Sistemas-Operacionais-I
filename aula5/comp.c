#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <fcntl.h>

int main() {
    pid_t id = fork();
    int status;
    
    if(id < 0) {
        printf("[ERRO] Erro ao criar o processo.\n");
        return 1;
    }
    if(id == 0) {
        // Processo filho 
        execlp("gcc", "gcc","-o", "olamundo", "olamundo.c", NULL); // executa o gcc
        perror("[ERRO] execlp falhou.\n");
    
        return 1;
    } else {
         //Processo Pai
        wait(&status);
        if (WIFEXITED(status) && WEXITSTATUS(status) == 0) {
            printf("[GCC] arquivo compilado!\n");
            //Executar olamundo
            id = fork();
            if( id == 0) {
                execlp("/home/aluno/so1/aula5/olamundo", "olamundo", NULL); // executa o olamundo
            }
            else {
                wait(NULL);
                printf("[PROCESSO PAI] processo pai termina. \n");
                exit(0);
                
            }
            

        }
        
    }


    return 0;
}
