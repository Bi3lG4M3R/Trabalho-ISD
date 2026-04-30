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
    int input1[MAX], input2[MAX], input3[MAX],firstResult[MAX],vet5[MAX], num;
    char operador1, operador2;
    
    do{
        printf("Digite o primeiro numero binario (ou -1 para sair): ");
        scanf("%d", &num);

        /* verificardor primeiro numero */
        if(num != -1){
            
            binario_vetor(num,input1);

            do{
                printf("Digite a operacao desejada (+ ou -): ");
                scanf(" %c",&operador1);
                if(operador1 != '+' && operador1 != '-')
                    printf("Operador invalido! Digite um operador valido.\n");

            }while(operador1 != '+' && operador1 != '-');

            printf("Digite o segundo numero binario: ");
            scanf("%d", &num);

            /* verificardor segundo numero */
            if (num != -1){
                
                binario_vetor(num,input2);

                //Primeira operacao
                
                if(operador1 == '+')
                    soma_binarios(input1,input2,firstResult);
                   
                if(operador1 == '-')
                    subtracao_binarios(input1,input2,firstResult);
                
                do{
                    printf("Digite a operacao desejada (+ ou -): ");
                    scanf(" %c",&operador2);
                    if(operador2 != '+' && operador2 != '-')
                        printf("Operador invalido! Digite um operador valido.\n");
                    
                }while(operador2 != '+' && operador2 != '-');

            
                printf("Digite o terceiro numero binario: ");
                scanf("%d",&num);

                if(num != -1){
                    binario_vetor(num,input3);

                    //Segunda operacao
                    if (operador2 == '+')
                        soma_binarios(firstResult,input3,vet5);
                    
                    if(operador2 == '-')
                        subtracao_binarios(firstResult,input3,vet5);
                    
                
                    //saida formatada
                    printf("\nResultado:\n");        
                    
                    /* imprime primeiro numero inserido */
                    escreve_vetor(input1);
                    printf("b (%di ",binario_decimal_sinal(input1));
                    binario_hexadecimal(input1);
                    printf("h)\n");

                    printf("%c\n",operador1);
                    
                    /* imprime segundo numero inserido */
                    escreve_vetor(input2);
                    printf("b (%di ",binario_decimal_sinal(input2));
                    binario_hexadecimal(input2);
                    printf("h)\n");

                    printf("%c\n",operador2);

                    /* imprime terceiro numero inserido */
                    escreve_vetor(input3);
                    printf("b (%di ",binario_decimal_sinal(input3));
                    binario_hexadecimal(input3);
                    printf("h)\n");

                    printf("=\n");

                    escreve_vetor(vet5);
                    printf("b (%di ",binario_decimal_sinal(vet5));
                    binario_hexadecimal(vet5);
                    printf("h)\n");


                }
                

            }/*fecha segundo verificador de -1*/

            

        } /*fecha primeiro verificador de -1*/

        

    }while(num != -1);
    
    printf("Programa encerrado\n");

    return 0;
}
