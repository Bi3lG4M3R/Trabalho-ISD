#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

/* DEBUG FUNCTION */
void print_vetor(int vet[8]){
    for (int i = 0; i < 8; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");
}


/* adapta um numero inteiro binario para um vetor */
void binario_para_vetor(int bin, int vet[8]){
    for (int i = 7; i >= 0; i--) {
        vet[i] = bin % 10;
        bin = bin / 10;
    }
}

int vetor_para_binario(int vet[8]){
    int bin = 0;
    for (int i = 0; i < 8; i++) {
        bin = bin * 10 + vet[i];
    }
    return bin;
}

/*Função complementa A1 (inverte os valores do vetor)*/
void inverte_valor(int vet[8]){
    for (int i = 0; i < 8; i++) {
        //vet[i] = !vet[i];
        
        if(vet[i] == 1)
            vet[i] = 0;
        else
            vet[i] = 1;
    }
}
/*
void converte_A2(int *vet, int *dec){

}*/
