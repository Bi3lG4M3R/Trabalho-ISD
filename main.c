
#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

/*
a fazer, completar numeros a esquerda com 0,

verificar se o numero binario tem mais de 8 digitos

encerra o programa se detectar o -1 em qualquer scanf

*/

int main(void){

    char operador;

    /*  Variaveis para os numeros binarios  */
    int bin1, bin2, bin_final;
    int vet_bin1[8], vet_bin2[8], vet_bin_final[8];
    
    /*  Variaveis para os numeros decimais*/
    int deci1, deci2, deci_final;

    /*  Variaveis para os numeros hexadecimais*/
    char hex1[3], hex2[3], hex_final[3];

    /*  Leitura do primeiro binario  */
	printf("Insira o primeiro numero binario: ");
	scanf("%d", &bin1);

    binario_para_vetor(bin1, vet_bin1);
    inverte_valor(vet_bin1);
    /*printf("Insira o operador: ");
    scanf(" %c", &operador);*/

    /*  Leitura do segundo binario  */
	printf("Insira o segundo numero binario: ");
	scanf("%d", &bin2);

    printf("Primeiro numero binario: %d\n", bin1);
    bin1 = vetor_para_binario(vet_bin1);
    printf("Primeiro numero binario invertido: %d\n", bin1);
    printf("Segundo numero binario: %d\n", bin2);
	return 0;
}
