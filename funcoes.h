#ifndef FUNCOES_H
#define FUNCOES_H

#define MAX 8


void print_vetor (int vet[MAX]);

int potencia (int x, int n);

void print_vetor (int *vet);

void inteiro_para_binario (int bin,int *vet);

int binario_para_decimal (int *vetor,int inicio, int fim);

int binario_para_decimal_sinal (int *vetor);

void binario_para_hexadecimal (int *vetor);

void soma_binarios (int *vet1, int *vet2, int *resultado);

void subtracao_binarios (int *vet1, int *vet2, int *resultado);


#endif
