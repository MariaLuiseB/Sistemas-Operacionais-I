#include <stdio.h>
#include <stdlib.h>

int main() {
    // Para achar o começo da memória do heap, 
    //você aloca um espaço de memória (malloc) 
    //e ele vai pegar o 1° espaço de memória 
    //e ai você acha o começo do heap

    char *p = (char *) malloc(10);
    printf("ENDEREÇO DO HEAP: %p\n", p);

    int x;
    printf("ENDEREÇO DA PILHA: %p\n", &x);

    printf("ENDEREÇO DO CÓDIGO: %p\n", main);



}