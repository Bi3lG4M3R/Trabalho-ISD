/*
10011001
+
00100100
-
00000011
-1
*/

#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

#define MAX 8
/*
a fazer, completar numeros a esquerda com 0,

verificar se o numero binario tem mais de 8 digitos

encerra o programa se detectar o -1 em qualquer scanf

*/

/* é lido todos os valores de entrada, são guardados, e então são exibidos com as respectivas conversões e é feito os cálculos. 
Todos o processo só funciona para números binários de 8 bits */
int main(void){
    int vet1[MAX],vet2[MAX],vet3[MAX],vet4[MAX],vet5[MAX], bin;
    char operador1, operador2;
    

    while(1){
        printf("Digite o primeiro numero binario (ou -1 para sair): ");
        scanf("%d", &bin);

        if(bin == -1){
            printf("Programa encerrado\n");
            break;
        }

        binario_vetor(bin,vet1);

        printf("Digite a operacao (+ ou -): ");
        scanf(" %c",&operador1);

        printf("Digite o segundo numero binario: ");
        scanf("%d", &bin);

        binario_vetor(bin,vet2);

        //Primeira operacao
        if (operador1 == '+'){
            soma_binarios(vet1,vet2,vet4);
        }
        else if (operador1 == '-'){
            subtracao_binarios(vet1,vet2,vet4);
        }
        else{
            printf("Operador invalido!\n");
            continue;
        }

        printf("Digite a operacao (+ ou -): ");
        scanf(" %c",&operador2);
        
        printf("Digite o terceiro numero binario: ");
        scanf("%d",&bin);
        binario_vetor(bin,vet3);

        //Segunda operacao
        if (operador2 == '+'){
            soma_binarios(vet4,vet3,vet5);
        }
        else if (operador2 == '-'){
            subtracao_binarios(vet4,vet3,vet5);
        }
        else{
            printf("Operador invalido!\n");
            continue;
        }

        //saida formatada
        printf("\nResultado:\n");        
        
        escreve_vetor(vet1);
        printf("b (%di ",binario_decimal_sinal(vet1));
        binario_hexadecimal(vet1);
        printf("h)\n");

        printf("%c\n",operador1);
        
        escreve_vetor(vet2);
        printf("b (%di ",binario_decimal_sinal(vet2));
        binario_hexadecimal(vet2);
        printf("h)\n");

        printf("%c\n",operador2);

        escreve_vetor(vet3);
        printf("b (%di ",binario_decimal_sinal(vet3));
        binario_hexadecimal(vet3);
        printf("h)\n");

        printf("=\n");

        escreve_vetor(vet5);
        printf("b (%di ",binario_decimal_sinal(vet5));
        binario_hexadecimal(vet5);
        printf("h)\n");

    }
    
    return 0;
}
