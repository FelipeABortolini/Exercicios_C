/*Considerando a matriz:

float m[4][5] = {{1,2,3,4,55.5}, {3,3,3,3,3}, {9,9,9,19.9,29.9}, {9,7,19.9,29.99,29.9}};

Faça um programa em C que apresenta:

- o menor elemento da matriz;

- a soma da primeira coluna da matriz (coluna 0);

- os elementos da última linha da matriz;.

# saída esperada - ignore esta linha - substituir <valor> pelo resultado a ser apresentado #

Menor elemento da matriz: <valor>

Soma dos elementos da primeira coluna da matriz: <valor>

Elementos da ultima linha da matriz: <valor1, valor2, ..., valorn>*/

#include<stdio.h>
int main(){
	float m[4][5] = {{1,2,3,4,55.5}, {3,3,3,3,3}, {9,9,9,19.9,29.9}, {9,7,19.9,29.99,29.9}}, menor, soma_prim_col = 0, ult_linha[5];
	int i, j;
	for(i=0; i<4; i++){
		for(j=0; j<5; j++){
			if((i==0)&&(j==0)){
				menor = m[i][j];
			} if(m[i][j] < menor){
				menor = m[i][j];
			}
		}
	}
	for(i=0; i<4; i++){
		for(j=0; j<5; j++){
			if(j == 0){
				soma_prim_col += m[i][j];
			}
		}
	}
	for(i=0; i<4; i++){
		for(j=0; j<5; j++){
			if(i == 3){
				ult_linha[j] = m[i][j];
			}
		}
	}
	printf("Menor elemento da matriz: %f\n", menor);
	printf("Soma dos elementos da primeira coluna da matriz: %f\n", soma_prim_col);
	printf("Elementos da ultima linha da matriz: ");
	for(i=0; i<5; i++){
		if(i == 4){
			printf("%f", ult_linha[i]);
		} else {
			printf("%f, ", ult_linha[i]);
		}
	}
}
