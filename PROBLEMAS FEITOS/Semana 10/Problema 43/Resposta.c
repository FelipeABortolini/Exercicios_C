/*Escreva uma função em linguagem C que determine o fatorial de um número. Essa função deve receber 
um número como parâmetro de entrada e retonar o seu fatorial. Faça a leitura do valor e exiba os resultados 
na função principal (main()). Para que a correção automática funcione siga as instruções abaixo:

####### Entrada ########

printf("Digite um número\n");

#######################

####### Saída ########

printf("O fatorial de %d é %d.\n, num, resp);*/

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
	printf("Digite um número\n");
	scanf("%d", &num);
	resp = calc_fat(num);
	printf("O fatorial de %d é %d.\n", num, resp);
	return 0;
}
