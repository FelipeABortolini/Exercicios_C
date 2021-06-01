/*Fa�a um programa em C que leia uma lista de valores informados pelo usu�rio. O n�mero de valores 
reais digitados ser� definido pelo usu�rio que informar� o valor 0 (zero) para indicar que a lista 
de valores a serem informados acabou, e para simplificar, vamos considerar que ser�o digitados no m�ximo 20 valores.

Ap�s o t�rmino da leitura dos valores fornecidos pelo usu�rio, apresentar na tela a m�dia dos valores 
e os valores que est�o acima da m�dia de todos os valores informados.

Para que a avalia��o automatizada funcione, siga as instru��es abaixo:

para ler os valores apresente a mensagem abaixo e na sequencia leia os valores usando apenas um scanf para cada valor.

printf("Informe os valores , 1 em cada linha. Informe 0 (zero) para finalizar.\n");

a sa�da deve ter o seguinte formato
 
### inicio da sa�da - ignore esta linha ####

Media: 5.000
Valores acima da media: 6.000, 7.000, 8.000

### fim da sa�da - ignore esta linha ####*/

#include<stdio.h>
int main(){
	float lista[20], num, M, soma = 0;
	int k, i;
	printf("Informe os valores , 1 em cada linha. Informe 0 (zero) para finalizar.\n");
	for(k=0; k<20; k++){
		scanf("%f", &num);
		if(num != 0){
			lista[k] = num;
	    } else {
	    	break;
		}
	}
	for(i=0; (i<k) && (i<20); i++){
		soma += lista[i];
	}
	M = soma/i;
	printf("Media: %f\n", M);
	printf("Valores acima da media: ");
	for(i=0; i<k; i++){
		if(lista[i] > M){
			printf("%f,", lista[i]);
		}
	}
}
