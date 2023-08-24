#include <stdio.h>

int main() {
    int n, p1, p2, km1, km2, passos = 0, rodadas = 0;

    printf("Qual o tamanho da estrada: ");
    scanf("%d", &n);
    printf("Qual a posição do primeiro porquinho: ");
    scanf("%d", &p1);
    printf("Qual a posição do segundo porquinho: ");
    scanf("%d", &p2);

    km1 = p1 % n;
    km2 = p2 % n;

    int p1_rodada = km1; // posicao do porquinho 1 no inicio da rodada
    int p2_rodada = km2; // posicao do porquinho 2 no inicio da rodada
    while (km1 != km2) {
        km1 = (km1 + 1) % n;
        km2 = (km2 + 1) % n;
        passos++;
        if (km1 == km2) {
            break;
        }
        if (km1 >= km2) {
            km1 = (km1 - 1) % n;
        }
        if (km1 == p1_rodada) {
            p1_rodada = km1;
            p2_rodada = km2;
            rodadas++;
        } else if (km2 == p2_rodada) {
            p1_rodada = km1;
            p2_rodada = km2;
            rodadas++;
        }
    }

    if (km1 != km2) {
        printf("Os porquinhos nunca se encontram na estrada de tamanho %d\n", n);
    } else {
        printf("Os porquinhos se encontraram no km %d depois de %d passos em %d rodadas\n", km1, passos, rodadas);
    }

    return 0;
}




