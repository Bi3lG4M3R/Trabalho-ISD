#include "funcoes.h"

void binario_para_vetor(int bin, int *vet[8])
{
    for (int i = 7; i >= 0; i--) {
        *vet[i] = bin % 10;
        bin = bin / 10;
    }
}

int vetor_para_binario(int vet[8])
{
    int bin = 0;
    for (int i = 0; i < 8; i++) {
        bin = bin * 10 + vet[i];
    }
    return bin;
}

void converte_A2(int *vet, int *dec){

}
