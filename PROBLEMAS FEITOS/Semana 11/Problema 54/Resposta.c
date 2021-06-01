/*Escreva um programa em linguagem C capaz de receber como entrada matrizes de inteiros de 3x3 elementos. 
O programa deve implementar um procedimento para ler os elementos da matriz. Uma função para retorne o somatório 
de todos os elementos da matriz elevados ao quadrado. Uma função que imprima todos os elementos da matriz elevados ao cubo. 

################## Entradas #######################

printf("Digite os elementos da matriz, um em cada linha:");

#################################################

################## Saída #########################

Somatório dos quadrados: <valor>

<elementos a matriz ao cubo, 3 elementos por linha>

##################################################

Exemplo para a matriz de entrada:

1 1 1

2 2 2

1 1 1

Saída:

Somatório dos quadrados: 18

1 1 1

8 8 8

1 1 1*/

#include<stdio.h>
#include<math.h>
#define LINHAS 3
#define COLUNAS 3

void recebe_matriz(int m[LINHAS][COLUNAS]){
	int i, j;
	for(i=0; i<LINHAS; i++){
		for(j=0; j<COLUNAS; j++){
			scanf("%d", &m[i][j]);
		}
	}
}

int soma_dos_quadrados(int n[LINHAS][COLUNAS]){
	int i, j, soma = 0;
	for(i=0; i<LINHAS; i++){
		for(j=0; j<COLUNAS; j++){
			soma += pow(n[i][j], 2);
		}
	}
	return soma;
}

void matriz_cubo(int p[LINHAS][COLUNAS]){
	int i, j;
	for(i=0; i<LINHAS; i++){
		for(j=0; j<COLUNAS; j++){
			p[i][j] = pow(p[i][j], 3);
		}
	}
	for(i=0; i<LINHAS; i++){
		for(j=0; j<COLUNAS; j++){
			printf("%d ", p[i][j]);
		}
		printf("\n");
	}
}


int main(){
	int matriz[LINHAS][COLUNAS], somatorio;
	printf("Digite os elementos da matriz, um em cada linha:\n");
	recebe_matriz(matriz);
	somatorio = soma_dos_quadrados(matriz);
	printf("SomatÃ³rio dos quadrados: %d\n", somatorio);
	matriz_cubo(matriz);
}
