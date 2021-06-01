/* Programa que lê os votos dos eleitores e calcula a quantidade de votos de cada candidato, bem como a quantidade de votos nulos e em branco e a quantidade total de votos:

 Autor: Felipe Augusto Bortolini        Data: 29/09/2020


 Teste de Mesa:
_____voto______|_________Resultado_________|
   <- 1        |                           |
   <- 1        |                           |
   <- 1        |                           |
   <- 1        |                           |
   <- 1        |                           |
   <- 2        |                           |
   <- 2        |                           |
   <- 2        |                           |
   <- 2        |                           |
   <- 2        |                           |
   <- 2        |                           |
   <- 2        |                           |
   <- 2        |                           |
   <- 3        |                           |
   <- 3        |                           |
   <- 3        |                           |
   <- 4        |                           |
   <- 4        |                           |
   <- 5        |                           |
   <- 0        |                           |
               |  Votos candidato 1: 5 *   |
               |  Votos candidato 2: 8 *   |
               |  Votos candidato 3: 3 *   |
               |      Votos nulos: 2   *   |
               |     Votos brancos: 1  *   |
               |    Total de votos: 19 *   |

Código em C:*/

#include<stdio.h>
int main(){
	int VotosCandidato1 = 0, VotosCandidato2 = 0, VotosCandidato3 = 0, VotosBrancos = 0, VotosNulos = 0, TotaldeVotos = 0, voto = 0;
	printf("Informe os votos digitando um valor entre de 1 a 5 em cada linha. Informe 0 (zero) para finalizar e ver o resultados.\n");
	do {
		scanf("%d", &voto);
		if(voto == 1 || voto == 2 || voto == 3 || voto == 4 || voto == 5){
			TotaldeVotos += 1;
		}
		switch(voto){
			case 1:
				VotosCandidato1 += 1;
				break;
			case 2:
				VotosCandidato2 += 1;
				break;
			case 3:
				VotosCandidato3 += 1;
				break;
			case 4:
				VotosNulos += 1;
				break;
			case 5:
				VotosBrancos += 1;
				break;
			case 0:
				break;
		}
	} while(voto!=0);
	printf("Votos candidato 1: %d\n", VotosCandidato1);
	printf("Votos candidato 2: %d\n", VotosCandidato2);
	printf("Votos candidato 3: %d\n", VotosCandidato3);
	printf("Votos nulos: %d\n", VotosNulos);
	printf("Votos brancos: %d\n", VotosBrancos);
	printf("Total de votos: %d\n", TotaldeVotos);	
}
