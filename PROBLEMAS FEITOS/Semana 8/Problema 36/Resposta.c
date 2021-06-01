/*Considerando a matriz:

float m[4][5] = {{1,2,3,4,55.5}, {3,3,3,3,3}, {9,9,9,19.9,29.9}, {9,7,19.9,29.99,29.9}};

Faça um programa em C que apresenta:

- o maior elemento da matriz;

- a média de todos os elementos da matriz;

- a lista dos elementos maiores que a média de todos os elementos da matriz.

# saída esperada - ignore esta linha - substituir <valor> pelo resultado a ser apresentado #

Maior elemento da matriz: <valor>

Media dos elementos da matriz: <valor>

Elementos da matriz maiores que a media: <valor1, valor2, ..., valorn>*/

#include<stdio.h>
int main(){
	float m[4][5] = {{1,2,3,4,55.5}, {3,3,3,3,3}, {9,9,9,19.9,29.9}, {9,7,19.9,29.99,29.9}}, maior, soma = 0, media;
	int i, j, k = 0, n = 0;
	for(i=0; i<4; i++){
		for(j=0; j<5; j++){
			if((i==0)&&(j==0)){
				maior = m[i][j];
			} if(m[i][j] > maior){
				maior = m[i][j];
			}
		}
	}
	for(i=0; i<4; i++){
		for(j=0; j<5; j++){
			soma += m[i][j];
		}
	}
	media = soma/20;
	for(i=0; i<4; i++){
		for(j=0; j<5; j++){
			if(m[i][j] > media){
				k += 1;
			}
		}
	}
	float maior_que_media[k];
	for(i=0; i<4; i++){
		for(j=0; j<5; j++){
			if(m[i][j] > media){
			    maior_que_media[n] = m[i][j];
				n += 1;
			}
		}
	}
	printf("Maior elemento da matriz: %f\n", maior);
	printf("Media dos elementos da matriz: %f\n", media);
	printf("Elementos da matriz maiores que a media: ");
	for(i=0; i<k; i++){
		if(i == k-1){
			printf("%f", maior_que_media[i]);
		} else {
			printf("%f, ", maior_que_media[i]);
		}
	}
}
