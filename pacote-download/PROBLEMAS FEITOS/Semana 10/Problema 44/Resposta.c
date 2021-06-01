/*Fa�a uma fun��o em linguagem C que receba dois valores como par�metro de calcule o M�ximo Divisor 
Comum (MDC) destes n�mero, retornando o valor encontrado. Leia os valores e exiba o resultado na fun��o 
principal (main()). Para que a corre��o autom�tica funcione, siga as instru��es abaixo:

############## Entrada ################

printf("Digite dois n�mero, um em cada linha.\n");

######################################

############### Sa�da #################

printf("O MDC entre %i e %i � %i.", n1, n2, result);

######################################*/

#include<stdio.h>

int calc_mdc(int num1, int num2){
	int mdc, i;
	if(num1 <= num2){
		for(i=1; i<num1+1; i++){
			if((num1 % i == 0) && (num2 % i == 0)){
				mdc = i;
			}
		}
	} else {
		for(i=1; i<num2+1; i++){
			if((num1 % i == 0) && (num2 % i == 0)){
				mdc = i;
			}
		}
	}
	return mdc;
}

int main(){
	int n1, n2, result;
	printf("Digite dois n�mero, um em cada linha.\n");
	scanf("%d %d", &n1, &n2);
	result = calc_mdc(n1, n2);
	printf("O MDC entre %i e %i � %i.", n1, n2, result);
}
