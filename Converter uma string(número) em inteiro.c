#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* 
Converte o n�mero em formato de caracter em n�mero inteiro fazendo a conta de:
	n�mero em inteiro = (posi��o do vetor de caracter - 48)
Depois disso � analisado posi��o a posi��o e multiplicado por 10 elevado � posi��o atual para separar de unidade, dezena, centena ... que � feito com a conta:
	n�mero inteiro = posi��o atual do vetor de caractere * 10 elevado � posi��o do vetor de forma contr�ria
Somando todas as ordens de um n�mero � poss�vel chegar ao resultado que � retornado ao t�rmino da fun��o
*/
int convert_int_char(char *numeros, long long int num){
	int i;

	for(i = 0; i < strlen(numeros); i ++){
		
		num = num + (numeros[i] - 48) * pow(10, strlen(numeros) - 1 - i);
		
	}
	
	return num;
	
}

main(){
	
	char numeros[] = {"12349"};
	long long int num = 0;
	
	printf("\n Numero convertido: %lld", convert_int_char(numeros, num));
	
}
