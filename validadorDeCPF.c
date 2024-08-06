#include <stdio.h>

void main(){
	int cpf[11], i, primeiro_digito, segundo_digito;
	int soma = 0, mult = 10, resto_divisao = 0;
	/*informando o cpf*/
	for(i=0; i<11; i++){
		int d;
		printf("Informe o %d digito: ", i+1);
		scanf("%d", &d);
		cpf[i] = d;
	}
	
	
	/*Verificando o primeiro digito*/
	for(i=0; i<9; i++){
		soma += cpf[i] * mult;
		mult--;
	}
	resto_divisao = soma%11;
		if(resto_divisao < 2){
			primeiro_digito = 0;
		}else{
			primeiro_digito = 11 - resto_divisao;
		}
		
	printf("Primeiro digito: %d\n", primeiro_digito);
	
	/*imprimindo o cpf*/
	for(i = 0; i < 11; i++){
		printf("%d", cpf[i]);
	}
}