#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void trata_sinal (int sinal) {
    printf("[MENSAGEM] Aqui não malandro... \n");
}


int main() {

    while(1) {
        signal(SIGINT, trata_sinal);
        printf("um processo teimoso...\n");
        sleep(1);

    }
}