#include <stdio.h>
#include <stdlib.h>

main(){
	
	int num;
	char numero[20];
	
	gets(numero);
	printf("\n\n %s", numero);
	
	// Transforma��o do n�mero em string para n�mero em inteiro
	num = numero[0] - 48;

	printf("\n\n %d", num);
	
	// Transforma��o do n�mero em inteiro para n�mero em string
	numero[0] = num + 48;
	
	printf("\n\n %c", numero[0]);
	
}
