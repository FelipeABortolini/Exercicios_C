/*Escreva uma fun��o em linguagem C que determine o fatorial de um n�mero. Essa fun��o deve receber 
um n�mero como par�metro de entrada e retonar o seu fatorial. Fa�a a leitura do valor e exiba os resultados 
na fun��o principal (main()). Para que a corre��o autom�tica funcione siga as instru��es abaixo:

####### Entrada ########

printf("Digite um n�mero\n");

#######################

####### Sa�da ########

printf("O fatorial de %d � %d.\n, num, resp);*/

#include<stdio.h>

int calc_fat (int n){
	if(n) {
	    return n*calc_fat(n-1);
	} else {
		return 1;
	}

}

int main (){
	int num, resp;
	printf("Digite um n�mero\n");
	scanf("%d", &num);
	resp = calc_fat(num);
	printf("O fatorial de %d � %d.\n", num, resp);
	return 0;
}
