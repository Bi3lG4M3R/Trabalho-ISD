#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

#define MAX 8

/* Função com complexidade O(n). Ele calcula o valor de x elevado a n, multiplicando x n vezes */
int potencia (int x, int n){
    int r;
    r = 1;
    while(n>0){
        r = r * x;
        n--;
    }
    return r;
}

/* Escreve o vetor de 8 bits. Complexidade O(n) */
void print_vetor (int *vet){
    int i;
    for(i = 0;i<8;i++){
        printf("%d",vet[i]);
    }
}

/* Converte um número binario inteiro de 8 bits sem sinal em um vetor com todos os zeros a esquerda já prontos. Complexidade O(n) */
void inteiro_para_binario (int num, int *vet){
    int i = 7;
    
    while(num > 0){
        vet[i] = num % 10;
        i--;
        num = num / 10;
    }

    if (i != -1){
        while(i > -1){
            vet[i] = 0;
            i--;
        }
    }
}

/* Dado um vetor com os números binários, ele converte para o decimal equivalente. Para auxiliar na conversão para hexadecimal, 
será informado o inicio e o fim do intervalo. Complexidade O(n) */
int binario_para_decimal (int *vetor,int inicio, int fim){
    int num, i, p=0;
    num = 0;
    for(i = fim; i >= inicio; i--){
        if (vetor[i] != 0){
            num = num + potencia(2,p);
        }
        p++;
    }
    return num;
}

/* Dado um vetor com os bits de um binario é identificado se ele representa um negativo ou um positivo, 
e assim é convertido para o valor equivalente. Complexidade O(n) */
int binario_para_decimal_sinal (int *vetor){
    int i, vetor2[MAX];
    if (vetor[0] == 0){
        return binario_para_decimal(vetor,0,7);
    }
    else{
        for(i=0;i<8;i++){
            if(vetor[i] == 0){
                vetor2[i] = 1;
            }
            else{
                vetor2[i] = 0;
            }
        }
        return (binario_para_decimal(vetor2, 0, 7) + 1) * -1;
    }
}

/* Dado o vetor com binario, ele é dividido em 2 partes (0 a 3 e 4 a 7) e cada parte é convertida para o valor em hexadecimal equivalente
Complexidade O(n) */
void binario_para_hexadecimal (int *vetor){
    int r1, r2;
    r1 = binario_para_decimal(vetor, 0,3);
    r2 = binario_para_decimal(vetor,4,7);
    switch(r1){
        case 10:
            printf("A");
        break;
        case 11:
            printf("B");
        break;
        case 12:
            printf("C");
        break;
        case 13:
            printf("D");
        break;
        case 14:
            printf("E");
        break;
        case 15:
            printf("F");
        break;
        default:
            printf("%d",r1);
        break;
    }            
    switch(r2){
        case 10:
            printf("A");
        break;
        case 11:
            printf("B");
        break;
        case 12:
            printf("C");
        break;
        case 13:
            printf("D");
        break;
        case 14:
            printf("E");
        break;
        case 15:
            printf("F");
        break;
        default:
            printf("%d",r2);
        break;
    }
}

/* Dado dois vetores de binarios validos, e um terceiro vetor resultado é feito vetor1 + vetor2 == resuldado, onde o carry é ignorado
Complexidade O(n) */
void soma_binarios (int *vet1, int *vet2, int *resultado){
    int num = 0,i = 7;
    for(i = 7; i >= 0; i--){
        resultado[i] = vet1[i] + vet2[i] + num;
        num = 0;
        
        if (resultado[i] == 2){
            num = 1;    
            resultado[i] = resultado[i] - 2;
        }

        if (resultado[i] == 3){
            num = 1;
            resultado[i] = resultado[i] - 2;
        }
    }
}

/* Dado dois vetores de binarios validos e na respectiva ordem, e um terceiro vetor resultado, é feito vetor1 - vetor2 == resultado, 
onde em caso de "emprestimo" é retornado até o valor 1 em vet1 e depois pega todos os zeros e converte em 1. Complexidade O(n)*/
void subtracao_binarios (int *vet1, int *vet2, int *resultado){
    int i, aux[MAX];

    for(i=0;i<8;i++){
    	if (vet2[i] == 0){
    		aux[i] = 1;
        }else{
		   aux[i] = 0;
        }
	}

	if(aux[7] == 0)
	    aux[7] = 1;

	else{
		aux[7] = 0;
		i = 6;
		while(aux[i] == 1 && i>=0){
			aux[i] = 0;
			i--;
		}
		if (i >= 0){
			aux[i] = 1;
		}
	}
	soma_binarios(vet1,aux,resultado);   
}