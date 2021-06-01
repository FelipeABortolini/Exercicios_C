/*Pedro precisa calcular a área de uma série de figuras geométrica. As informações sobre as figuras estão em um 
arquivo texto com a descrição da figura e as informações das medidas. As figuras possíveis são quadrado, círculo 
e triângulo. Escreve um programa em linguagem C capaz de realizar a leitura do arquivo e calcular a área das figuras. 
O arquivo de entrada segue o exemplo abaixo:

quadrado

5.0

círculo

4.7

triângulo 

3.7

4.5

Ou seja, na primeira linha existe o nome da figura. Caso seja círculo ou quadrado o próximo valor é a informação de 
lado ou raio, respectivamente. Se for um triângulo, os próximos dois valores são as informações de base e altura. Não 
existe limite para a quantidade de figuras que podem haver no arquivo, o programa deve ler o arquivo até o fim.

Informação importante: Para que a correção automática funcione, é necessário que o arquivo fonte do programa se chame main.c. 
Nenhum outro nome será aceito. Observe corretamente os nomes do arquivo de entrada (entrada.txt). Considere o valor de pi sendo 3.14.

Exemplo da formatação de saída:

############## Saída ###################

quadrado: 25.000000

círculo: 69,362600

triângulo: 8,325000

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
