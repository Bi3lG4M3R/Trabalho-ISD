/*************************************************** 
        TRABALHO ISD 

    MEMBROS DO GRUPO:
    - Gabriel Richard Zambianchi de Oliveira
    - Ismaelda Silva Machado de Albuquerque
    - Gustavo Basso dos Santos

***************************************************/

/* entrada padrão para teste:
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
    int input1[MAX], input2[MAX], input3[MAX],firstResult[MAX],finalResult[MAX], num;
    char operador1, operador2;
    
    do{
        printf("Digite o primeiro numero binario (ou -1 para sair): ");
        scanf("%d", &num);

        /* verificardor primeiro numero */
        if(num != -1){
            
            inteiro_para_binario(num, input1);

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
                
                inteiro_para_binario(num,input2);

                /* Primeira operacao */
                
                if(operador1 == '+')
                    soma_binarios(input1, input2, firstResult);
                   
                if(operador1 == '-')
                    subtracao_binarios(input1, input2, firstResult);
                
                do{
                    printf("Digite a operacao desejada (+ ou -): ");
                    scanf(" %c",&operador2);
                    if(operador2 != '+' && operador2 != '-')
                        printf("Operador invalido! Digite um operador valido.\n");
                    
                }while(operador2 != '+' && operador2 != '-');

            
                printf("Digite o terceiro numero binario: ");
                scanf("%d",&num);

                if(num != -1){
                    inteiro_para_binario(num, input3);

                    /* Segunda operacao */
                    if (operador2 == '+')
                        soma_binarios(firstResult, input3, finalResult);
                    
                    if(operador2 == '-')
                        subtracao_binarios(firstResult, input3, finalResult);
                    
                
                    /* saida formatada */
                    printf("\nResultado:\n");        
                    
                    /* imprime primeiro numero inserido */
                    print_vetor(input1);
                    printf("b (%di ",binario_para_decimal_sinal(input1));
                    binario_para_hexadecimal(input1);
                    printf("h)\n");

                    printf("%c\n",operador1);
                    
                    /* imprime segundo numero inserido */
                    print_vetor(input2);
                    printf("b (%di ",binario_para_decimal_sinal(input2));
                    binario_para_hexadecimal(input2);
                    printf("h)\n");

                    printf("%c\n",operador2);

                    /* imprime terceiro numero inserido */
                    print_vetor(input3);
                    printf("b (%di ",binario_para_decimal_sinal(input3));
                    binario_para_hexadecimal(input3);
                    printf("h)\n");

                    printf("=\n");

                    print_vetor(finalResult);
                    printf("b (%di ",binario_para_decimal_sinal(finalResult));
                    binario_para_hexadecimal(finalResult);
                    printf("h)\n");


                }
                

            }/*fecha segundo verificador de -1*/

            

        } /*fecha primeiro verificador de -1*/

        

    }while(num != -1);
    
    printf("Programa encerrado\n");

    return 0;
}
