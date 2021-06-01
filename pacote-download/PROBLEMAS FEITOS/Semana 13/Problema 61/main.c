/*Escreva um programa em Linguagem C que leia números inteiros de um arquivo de entrada binário, 
denominado entrada.bin, e escreva em um arquivo de saída binário, denominado saida.bin, apenas os 
números primos (não consideramos 1 como número primo).

Para que a correção automática funcione, é necessário que o código fonte do seu programa se chame 
main.c. Qualquer outro nome será rejeitado. */

#include<stdio.h>

int teste_primo(int n){
	int i, a=0;
	for(i=1; i<n+1; i++){
		if(n%i == 0){
			a++;
		}
	}
	if(a == 1 || a > 2){
		return 1;
	} else {
		return 2;
	}
}
int main(){
	FILE*arq1;
	FILE*arq2;
	int x, result;
	if((arq1=fopen("entrada.bin", "rb")) == NULL){
		printf("Erro ao abrir o arquivo!\n");
		return 0;
	}
	if((arq2=fopen("saida.bin", "wb")) == NULL){
		printf("Erro ao abrir o arquivo!\n");
		return 0;
	}
	while(fread(&x, sizeof(int), 1, arq1)){
		result = teste_primo(x);
		if(result == 2){
			fwrite(&x, sizeof(int), 1, arq2);
		}
	}
	fclose(arq1);
	fclose(arq2);
	return 0;
}

