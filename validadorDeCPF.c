#include <stdio.h>

void main(){
	int cpf[11], i;
	int soma = 0, mult = 10, resto_divisao = 0;
	
	/*informando o cpf*/
	for(i=0; i<11; i++){
		int d;
		printf("Informe o %d digito: ", i+1);
		scanf("%d", &d);
		cpf[i] = d;
	}
	
	int pd = cpf[9], sd = cpf[10];
	
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
	
	mult = 11, soma = 0;
	/*Verificando o segundo digito*/
	for(i=0; i<10; i++){
		
		soma += cpf[i] * mult;
		mult--;
	}
	resto_divisao = soma%11;
	if(resto_divisao < 2){
		cpf[10] = 0;
	}else{
		cpf[10] = 11 - resto_divisao;
	}
	
	for(i=0;i<11;i++){
		
	}
	
	if(pd == cpf[9] && sd == cpf[10]){
		printf("CPF informado: ");
		for(i=0; i<11;i++){
			printf("%d", cpf[i]);
		}
		printf("\nCPF valido!");
	}else{
		printf("CPF informado: ");
		for(i=0; i<9;i++){
			printf("%d", cpf[i]);
		}
		printf("%d%d", pd,sd);
		printf("\nCPF invalido!");
	}
	
}