/*Crie um programa que solicite que o usu�rio informe cinco n�meros. A seguir, 
o programa deve informar qual e o maior n�mero e tamb�m qual � o menor n�mero.

 Programa que recebe 5 n�meros e informa qual � o maior e qual � o menor.

 Autor: Felipe Augusto Bortolini        Data: 22/09/2020


 Teste de Mesa:
______nro______|___________Sa�da__________|
  <-   8       |                          |
  <-  65       |                          |
  <-  44       |                          |
  <-   5       |                          |
  <-  39       |                          | 
               |  O maior n�mero �: 65 *  |    
               |  O menor n�mero �: 5 *   |    


 C�digo em C:*/

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
    printf("O maior n�mero �: %d\n", o_maior);
    printf("O menor n�mero �: %d\n", o_menor);
}
