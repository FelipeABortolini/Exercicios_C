/*Crie um programa que solicite que o usuário informe cinco números. A seguir, 
o programa deve informar qual e o maior número e também qual é o menor número.

 Programa que recebe 5 números e informa qual é o maior e qual é o menor.

 Autor: Felipe Augusto Bortolini        Data: 22/09/2020


 Teste de Mesa:
______nro______|___________Saída__________|
  <-   8       |                          |
  <-  65       |                          |
  <-  44       |                          |
  <-   5       |                          |
  <-  39       |                          | 
               |  O maior número é: 65 *  |    
               |  O menor número é: 5 *   |    


 Código em C:*/

#include <stdio.h>

int main(){
	
    int nro, o_menor, o_maior, i;
    for (i = 0; i < 5; i = i + 1){
        printf("Informe um numero: ");
        scanf("%d", &nro);
		if ( i==0 ) {
            o_menor=nro;
            o_maior=nro;
        } else {
		    if (nro > o_maior){
        	    o_maior = nro;
		    } if(nro < o_menor){
			    o_menor = nro;
		    }
        }
    }
    printf("O maior número é: %d\n", o_maior);
    printf("O menor número é: %d\n", o_menor);
}
