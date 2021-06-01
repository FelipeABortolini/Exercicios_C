/*Faça um programa em C para auxiliar no processo de apuração do tráfego em um dos sentidos de uma rodovia. 
Para cada carro que passar pelo observador, este irá fornecer um código ao sistema de acordo com o tipo do 
veículo conforme a lista abaixo. Ao final, o sistema deverá apresentar quantos veículos de cada categoria passaram pela rodovia.
Valor informado para cada tipo de veículo:
1 - motocicleta
2 - automóvel;
3 - caminhão;
0 - encerra a leitura e apresenta os totais;

 Programa que apura o tráfego de uma rodovia.

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


 Código em C:*/

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
