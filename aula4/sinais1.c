#include <stdio.h>
#include <unistd.h>
#include <signal.h>


void trata_sinal (int sinal) {
    printf("[MENSAGEM] Recebi o sinal %d. \n", sinal);


}

int main() {
    //signal(SIGTERM, SIG_IGN); //    ignora o sinal

    signal(SIGTERM, trata_sinal); // se receber o sinal SIGTERM, trata o sinal dessa forma 1º param = sinal de interesse, 2º param = o que fazer com o sinal
    
    for(;;) {
        printf("estou vivo...");
        sleep(1);
    }
}