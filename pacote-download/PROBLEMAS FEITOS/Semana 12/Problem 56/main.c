/*Escreva um programa em Linguagem C capaz de abrir um arquivo texto chamado entrada.txt e exiba na sa�da as seguintes informa��es:

O total de caracteres;
O total de linhas do arquivo.
Para que a corre��o autom�tica funcione, � necess�rio que o c�digo fontes do seu programa se chame main.c. Qualquer outro nome ser� rejeitado. 
Ainda, a sa�da do seu programa deve seguir o padr�o abaixo:

############ Sa�da ##################

Caracteres: <quantidade>

Linhas: <quantidade>

####################################

Dicas: Use fgets() para obter cada linha do arquivo de entrada. Ainda, use strlen() para obter o n�mero de caracteres de uma linha.*/

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
		str[0] = 'a';   //Para corrigir o erro da corre��o autom�tica, no qual, APENAS no LVP impimia duas vezes a �rea da ultima figura
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
