#include <stdio.h>
#include <unistd.h>
#include <signal.h>


void trata_sinal (int sinal) {
    printf("[MENSAGEM] Recebi o sinal %d. \n", sinal);
}


int main() {

    alarm(5);

    while(1) {
        signal(SIGTERM, trata_sinal);
        printf("vou pausar até receber um sinal.\n");
        pause(); // invoca uma chamada de sistema e pede pro s.o bloquear o estado dessa processo
        printf("recebi um sinal, vou continuar.\n");
        sleep(1);

    }
}