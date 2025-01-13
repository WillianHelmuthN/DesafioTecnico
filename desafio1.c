#include <stdio.h>

int main () {
    int INDICE = 13, SOMA = 0;

    for (int K = 1;  K <= INDICE; K++)
    {
        SOMA = SOMA + K;
    }
    // K está inicializando em 0
    // O programa retorna 91

        printf("O valor final de SOMA é: %d\n", SOMA);

    return 0;        
}