/* Programa que apresenta a tabuada (de 0 at� o 10) de um n�mero inteiro informado pelo usu�rio usando uma estrutura de repeti��o.:

 Autor: Felipe Augusto Bortolini        Data: 29/09/2020


 Teste de Mesa:
_______numero_______|________Sa�da_______|
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


C�digo em C:*/
#include<stdio.h>
int main(){
	int numero = 0, multiplicador = 0, produto = 0;
	printf("Informe numero para apresenta��o da tabuada: \n");
	scanf("%d", &numero);
	for(multiplicador=1; multiplicador<=10; multiplicador+=1){
		produto = numero*multiplicador;
		printf("%d x %d = %d\n", numero, multiplicador, produto);
	}
}
