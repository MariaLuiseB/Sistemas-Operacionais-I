#include <unistd.h>

int main () {
    for(;;)
        fork(); // Criando processos infinitamente 
    return 0;
}