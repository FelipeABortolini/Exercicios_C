/*Escreva um programa em Linguagem C que descubra qual o ponto, do conjunto abaixo, com a menor distância a um ponto (x,y) digitado pelo usuário.

#define PTSSZ 10
struct ponto_t {
 int x;
 int y;
};
struct ponto_t pontos[PTSSZ] = { {1,1}, {2,3}, {4,8}, {3,3}, {5,6}, {7,1}, {8,8}, {9,10}, {5,2}, {10,11} };
Utilize a equação abaixo para determinar a distância entre dois pontos:

d(a,b) = sqrt((xb-xa)^2+(yb-ya)^2)

PONTO/RETA/ALINHAMENTO

#################  Entrada ########################

printf("Digite as coordenadas (x,y), um em cada linha.\n");

################## Saídas ########################

 printf("O ponto mais próximo é (%i, %i).\n", p.x, p.y);

#################################################*/

#include<stdio.h>
#include<math.h>
#define PTSSZ 10

struct ponto_t {
 int x;
 int y;
};

int main(){
	struct ponto_t pontos[PTSSZ] = { {1,1}, {2,3}, {4,8}, {3,3}, {5,6}, {7,1}, {8,8}, {9,10}, {5,2}, {10,11} };
	int vet[2],  ponto_menor_dist[2], i = 0, cont = 0;
	float dist, menor_dist;
	printf("Digite as coordenadas (x,y), um em cada linha.\n");
	scanf("%d %d", &vet[0], &vet[1]);
	for(i; i<PTSSZ; i++){
		dist = sqrt(pow(pontos[i].x-vet[0], 2) + pow(pontos[i].y-vet[1], 2));
		if(cont == 0){
			menor_dist = dist + 1;
			cont++;
		}
		if(dist < menor_dist){
			menor_dist = dist;
			ponto_menor_dist[0] = pontos[i].x;
			ponto_menor_dist[1] = pontos[i].y;
	    }
	}
	printf("O ponto mais próximo é (%i, %i).\n", ponto_menor_dist[0], ponto_menor_dist[1]);
	return 0;
}
