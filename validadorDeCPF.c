#include <stdio.h>

void main(){
	int cpf[11], i;
	
	#informando o cpf
	for(i = 0; i < 11; i++){
		int d;
		printf("Informe o %d digito: ", i+1);
		scanf("%d", &d);
		cpf[i] = d;
	}
	
	#imprimindo o cpf
	for(i = 0; i < 11; i++){
		printf("%d", cpf[i]);
	}
}