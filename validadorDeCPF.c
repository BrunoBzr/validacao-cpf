#include <stdio.h>

void main(){
	int cpf[11], i, soma = 0, mult = 10;
	
	/*informando o cpf*/
	for(i=0; i<11; i++){
		int d;
		printf("Informe o %d digito: ", i+1);
		scanf("%d", &d);
		cpf[i] = d;
	}
	
	for(i=0; i<9; i++){
		soma += cpf[i] * mult;
		mult--;
		printf("Soma: %d\n", soma);
	}
	
	
	/*imprimindo o cpf*/
	for(i = 0; i < 11; i++){
		printf("%d", cpf[i]);
	}
}