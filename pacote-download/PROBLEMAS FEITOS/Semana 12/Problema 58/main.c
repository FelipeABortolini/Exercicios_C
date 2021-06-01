/*Faça um programa em Linguagem C que leia cada uma das linhas de um arquivo de entrada, chamado entrada.txt, onde cada 
linha tem no máximo 50 caracteres, convertendo todos os caracteres para maiúsculas. Em seguida, grave o resultado em um 
arquivo chamado saida.txt.

Utilize a função toupper() para converter caracteres para maiúsculo:

int toupper ( int c );
Observe que esta função converte um único caractere por vez, portanto, será necessário percorrer as strings realizando a 
conversão. Ainda, letras acentuadas são ignoradas pela função. Portanto, não é necessário converter caracteres acentuados, 
sendo que a própria função irá ignorá-los. 

Informação importante: Para que a correção automática funcione, é necessário que o arquivo fonte do programa se chame main.c. 
Nenhum outro nome será aceito. Ainda, observe corretamente os nomes do arquivo de entrada (entrada.txt) e do arquivo de saída (saida.txt).*/

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
		str[0] = '\0';       //Para não dar problema na correção automática, devido à quebra de linha no final do arquivo "entrada.txt" no LPV.
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
