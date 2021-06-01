/*Escreva um programa em Linguagem C capaz de abrir um arquivo texto chamado entrada.txt e exiba na saída as seguintes informações:

O total de caracteres;
O total de linhas do arquivo.
Para que a correção automática funcione, é necessário que o código fontes do seu programa se chame main.c. Qualquer outro nome será rejeitado. 
Ainda, a saída do seu programa deve seguir o padrão abaixo:

############ Saída ##################

Caracteres: <quantidade>

Linhas: <quantidade>

####################################

Dicas: Use fgets() para obter cada linha do arquivo de entrada. Ainda, use strlen() para obter o número de caracteres de uma linha.*/

#include<stdio.h>

int main(){
	FILE *arq;
	char str[10];
	float lado, raio, altura, base, A;
	if((arq = fopen("entrada.txt", "r")) == NULL){
		printf("Erro ao abrir o arquivo!\n");
		return 0;
	}
	while(!feof(arq)){
		A = 0;
		str[0] = 'a';   //Para corrigir o erro da correção automática, no qual, APENAS no LVP impimia duas vezes a área da ultima figura
		fscanf(arq, "%s", str);
		if(str[0] == 'q'){
			fscanf(arq, "%f", &lado);
			A = lado * lado;
			printf("%s: %f\n", str, A);
		}
		else if(str[0] == 'c'){
			fscanf(arq, "%f", &raio);
			A = 3.14 * (raio * raio);
			printf("%s: %.5f0\n", str, A);
		}
		else if(str[0] == 't'){
			fscanf(arq, "%f %f", &base, &altura);
			A = (base * altura)/2;
			printf("%s: %f\n", str, A);
		}
	}
	return 0;
}
