/*Pedro precisa calcular a �rea de uma s�rie de figuras geom�trica. As informa��es sobre as figuras est�o em um 
arquivo texto com a descri��o da figura e as informa��es das medidas. As figuras poss�veis s�o quadrado, c�rculo 
e tri�ngulo. Escreve um programa em linguagem C capaz de realizar a leitura do arquivo e calcular a �rea das figuras. 
O arquivo de entrada segue o exemplo abaixo:

quadrado

5.0

c�rculo

4.7

tri�ngulo 

3.7

4.5

Ou seja, na primeira linha existe o nome da figura. Caso seja c�rculo ou quadrado o pr�ximo valor � a informa��o de 
lado ou raio, respectivamente. Se for um tri�ngulo, os pr�ximos dois valores s�o as informa��es de base e altura. N�o 
existe limite para a quantidade de figuras que podem haver no arquivo, o programa deve ler o arquivo at� o fim.

Informa��o importante: Para que a corre��o autom�tica funcione, � necess�rio que o arquivo fonte do programa se chame main.c. 
Nenhum outro nome ser� aceito. Observe corretamente os nomes do arquivo de entrada (entrada.txt). Considere o valor de pi sendo 3.14.

Exemplo da formata��o de sa�da:

############## Sa�da ###################

quadrado: 25.000000

c�rculo: 69,362600

tri�ngulo: 8,325000

########################################

Dica: Use fscanf() para ler as strings e os floats do arquivo de entrada.*/

#include<stdio.h>

int main(){
	FILE *arq;
	char str[200];
	int i, CARACTERES = 0, LINHAS = 0;
	if((arq = fopen("entrada.txt", "r")) == NULL){
		printf("Erro na abertura do arquivo!\n");
		return 0;	
	}
	while(!feof(arq)){
		if((fgets(str, 200, arq)) != NULL){
			for(i=0; str[i] != '\0'; i++){
				CARACTERES++;
			}
		    LINHAS++;
		}
	}
	fclose(arq);
	printf("Caracteres: %d\nLinhas: %d\n", CARACTERES, LINHAS);
	
	return 1;
}
