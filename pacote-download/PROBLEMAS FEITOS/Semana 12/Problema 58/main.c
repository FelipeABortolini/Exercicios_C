/*Fa�a um programa em Linguagem C que leia cada uma das linhas de um arquivo de entrada, chamado entrada.txt, onde cada 
linha tem no m�ximo 50 caracteres, convertendo todos os caracteres para mai�sculas. Em seguida, grave o resultado em um 
arquivo chamado saida.txt.

Utilize a fun��o toupper() para converter caracteres para mai�sculo:

int toupper ( int c );
Observe que esta fun��o converte um �nico caractere por vez, portanto, ser� necess�rio percorrer as strings realizando a 
convers�o. Ainda, letras acentuadas s�o ignoradas pela fun��o. Portanto, n�o � necess�rio converter caracteres acentuados, 
sendo que a pr�pria fun��o ir� ignor�-los. 

Informa��o importante: Para que a corre��o autom�tica funcione, � necess�rio que o arquivo fonte do programa se chame main.c. 
Nenhum outro nome ser� aceito. Ainda, observe corretamente os nomes do arquivo de entrada (entrada.txt) e do arquivo de sa�da (saida.txt).*/

#include<stdio.h>
#include<string.h>
#define TAM_STRING 51


int main(){
	FILE *arq1, *arq2;
	char A ,str[TAM_STRING];
	int i;
	if((arq1 = fopen("entrada.txt", "r")) == NULL || (arq2 = fopen("saida.txt", "w")) == NULL){
		printf("Erro ao abrir arquivo!\n");
		return 0;
	}
	while(!feof(arq1)){
		str[0] = '\0';       //Para n�o dar problema na corre��o autom�tica, devido � quebra de linha no final do arquivo "entrada.txt" no LPV.
		fgets(str, TAM_STRING, arq1);
		for(i=0; i<strlen(str); i++){
			A = toupper(str[i]);
			fprintf(arq2, "%c", A);
		}
	}
	fclose(arq1);
	fclose(arq2);
	return 0;
}
