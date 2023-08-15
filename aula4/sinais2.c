#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void tempo_esgotado() {
    printf("[MENSAGEM] TEMPO ESGOTADO.\n");
}

int main() {
    signal(SIGALRM, tempo_esgotado);

    alarm(5);

    while(1) {
        printf("esperando o alarme...\n");
        sleep(1);

    }
}