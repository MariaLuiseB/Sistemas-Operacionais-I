#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    char *m;
    int mem_size;
    int count = 0;

    if(argc < 2) { // numero de argumentos: nome do programa e o tamanho da memoria que ele usa
        printf("Uso: %s <mem_size em KB>\n", argv[0]);
        exit(0);
    }

    mem_size = atoi(argv[1]);
    m = (char *) malloc(mem_size * 1000); // aloca a memoria em KBytes

    if (m == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(0);
    }
    
    printf("Memória alocada: %d KBi\n", mem_size);
    
    while(1) { // loop infinito pra utilizar memória
        m[count] = 'x';
        count++;
        if(count == mem_size * 1000) {
            count = 0;
        }
    }
    return 0;
}