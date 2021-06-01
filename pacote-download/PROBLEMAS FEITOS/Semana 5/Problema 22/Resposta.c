/* Programa que converte a temperatura de Fahrenheit para Celsius:

 Autor: Felipe Augusto Bortolini        Data: 29/09/2020


   Teste de Mesa:
  ______F_______|_______C_______|
    <- 32       |               |
                |   0.000000  * |
    <- 100      |               |
                |   37.777779 * |
    <- 75       |               |
                |   23.888889 * |
    <- -1       |               |
                |               |


 Código em */

#include<stdio.h>
int main(){
	float C = 0, F = 0;
	printf("Informe a temperatura em Fahrenheit para conversão. Digite -1 para sair.\n");
	do {
	    scanf("%f", &F);
	    if(F != -1){
	    	C = 5*((F-32)/9);
	        printf("%f\n", C);
		}
	} while (F != -1);
}
