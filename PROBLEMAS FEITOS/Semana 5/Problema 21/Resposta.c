/* Programa que apresenta a tabuada (de 0 até o 10) de um número inteiro informado pelo usuário usando uma estrutura de repetição.:

 Autor: Felipe Augusto Bortolini        Data: 29/09/2020


 Teste de Mesa:
_______numero_______|________Saída_______|
      <- 3          |                    |
                    |    3 x 1 = 3   *   | 
                    |    3 x 2 = 6   *   | 
                    |    3 x 3 = 9   *   | 
                    |    3 x 4 = 12  *   |  
                    |    3 x 5 = 15  *   | 
                    |    3 x 6 = 18  *   | 
                    |    3 x 7 = 21  *   | 
                    |    3 x 8 = 24  *   | 
                    |    3 x 9 = 27  *   |  
                    |    3 x 10 = 30 *   | 


Código em C:*/
#include<stdio.h>
int main(){
	int numero = 0, multiplicador = 0, produto = 0;
	printf("Informe numero para apresentação da tabuada: \n");
	scanf("%d", &numero);
	for(multiplicador=1; multiplicador<=10; multiplicador+=1){
		produto = numero*multiplicador;
		printf("%d x %d = %d\n", numero, multiplicador, produto);
	}
}
