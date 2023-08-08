#include <unistd.h>

//Quantos processos serão criados? 
int main () {
    for(int i = 0; i< 3; i++)
        fork(); // 8 processos! Contando com o pai são 9 processos!
    return 0;
}