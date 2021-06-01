/*Fa�a um programa em C para auxiliar no processo de apura��o do tr�fego em um dos sentidos de uma rodovia. 
Para cada carro que passar pelo observador, este ir� fornecer um c�digo ao sistema de acordo com o tipo do 
ve�culo conforme a lista abaixo. Ao final, o sistema dever� apresentar quantos ve�culos de cada categoria passaram pela rodovia.
Valor informado para cada tipo de ve�culo:
1 - motocicleta
2 - autom�vel;
3 - caminh�o;
0 - encerra a leitura e apresenta os totais;

 Programa que apura o tr�fego de uma rodovia.

 Autor: Felipe Augusto Bortolini        Data: 24/09/2020


 Teste de Mesa:
    observador     |     totalmotocicletas      |     totalautomoveies     |    totalcaminhao    |
     <- 1          |                            |                          |                     |  
     <- 3          |                            |                          |                     |  
     <- 1          |                            |                          |                     |  
     <- 2          |                            |                          |                     |  
     <- 2          |                            |                          |                     |  
     <- 3          |                            |                          |                     |  
     <- 1          |                            |                          |                     |  
     <- 3          |                            |                          |                     |  
     <- 3          |                            |                          |                     |  
     <- 2          |                            |                          |                     |  
     <- 2          |                            |                          |                     |  
     <- 2          |                            |                          |                     |  
     <- 1          |                            |                          |                     | 
     <- 3          |                            |                          |                     |  
     <- 2          |                            |                          |                     | 
     <- 0          |                            |                          |                     |
                   |             4*             |                          |                     |
                   |                            |             6*           |                     | 
                   |                            |                          |           5*        |   


 C�digo em C:*/

#include<stdio.h>

int main(){
	
	int totalmotocicletas = 0, totalautomoveis = 0, totalcaminhao = 0, observador;
	while(observador != 0){
		scanf("%d", &observador);
		switch(observador){
			case 1:
				totalmotocicletas += 1;
				break;
			case 2:
				totalautomoveis += 1;
				break;
			case 3:
				totalcaminhao += 1;
				break;
			case 0:
				break;
			default:
			    printf("Dado inv%clido.\n", 160);	
		}
	}
	printf("Total de motocicleta: %d\n", totalmotocicletas);
    printf("Total de automovel: %d\n", totalautomoveis);
    printf("Total de caminhao: %d\n", totalcaminhao);
}
