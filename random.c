#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Configura para gerar números aleatórios diferentes a cada execução
    srand(time(NULL));

    // Gera um número aleatório entre 0 e 99
    int num = rand() % 100;

    printf("O número aleatório é: %d\n", num);

    return 0;
}
