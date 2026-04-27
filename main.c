
#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

/*
a fazer, completar numeros a esquerda com 0,

verificar se o numero binario tem mais de 8 digitos

encerra o programa se detectar o -1 em qualquer scanf

*/

int main(void){

    char operador1, operador2;

    /*  Variaveis para os numeros binarios  */
    int bin1, bin2, bin3, bin_final;
    int vet_bin1[8], vet_bin2[8], vet_bin3[8], vet_bin_final[8];
    
    /*  Variaveis para os numeros decimais*/
    int deci1, deci2, deci3, deci_final;

    /*  Variaveis para os numeros hexadecimais*/
    char hex1[3], hex2[3], hex3[3], hex_final[3];

    /*  Leitura do primeiro binario  */
	printf("Insira o primeiro numero binario: ");
	scanf("%d", &bin1);

    binario_para_vetor(bin1, vet_bin1);

    print_vetor(vet_bin1);

    inverte_valor(vet_bin1);

    print_vetor(vet_bin1);

    /*printf("Insira o operador: ");
    scanf(" %c", &operador);*/

    /*  Leitura do segundo binario  */
	printf("Insira o segundo numero binario: ");
	scanf("%d", &bin2);

    printf("Primeiro numero binario: %d\n", bin1);
    bin1 = vetor_para_binario(vet_bin1);
    printf("Primeiro numero binario invertido: %d\n", bin1);
    printf("Segundo numero binario: %d\n", bin2);

    /*******************************************************************
     *                           Testes
     * 
     *            Separação dos testes de do corpo do programa
     * 
     *                      Sequencia do programa
    *********************************************************************/
    /*
    // Le o primeiro numero binario
    scanf("%d", &bin1);

    // Le o primeiro operador
    scanf(" %c", &operador1);

    // Le o segundo numero binario
    scanf("%d", &bin2);

    // Le o terceiro numero binario
    scanf("%d", &bin3);

    // Le o segundo operador
    scanf(" %c", &operador2);
    
    //Processa os numeros binarios preparando os para as operacoes
    binario_para_vetor(bin1, vet_bin1);
    binario_para_vetor(bin2, vet_bin2);
    binario_para_vetor(bin3, vet_bin3);

    //Impressao dos resultados
    print_vetor(vet_bin1);
    printf("b");

    */
	return 0;
}
