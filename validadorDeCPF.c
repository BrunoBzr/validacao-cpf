#include <stdio.h>

void main(){
	int cpf[11], i;
	int soma = 0, mult = 10, resto_divisao = 0;
	int pd = cpf[9], sd = cpf[10];
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
		cpf[9] = 0;
		
	}else{
		cpf[9] = 11 - resto_divisao;
	}
	printf("soma antes segundo digito: %d\n", soma);
	mult = 11, soma = 0;
	/*Verificando o segundo digito*/
	for(i=0; i<10; i++){
		
		soma += cpf[i] * mult;
		mult--;
	}
	
	printf("soma segundo digito: %d\n", soma);
	
	resto_divisao = soma%11;
	if(resto_divisao < 2){
		cpf[10] = 0;
	}else{
		cpf[10] = 11 - resto_divisao;
	}
	
	for(i=0; i<11;i++){
		printf("%d", cpf[i]);
	}
	
}