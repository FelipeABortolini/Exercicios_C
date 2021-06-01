/*Fa�a uma fun��o em linguagem C que recebe 3 valores reais X, Y e Z e que verifique se esses 
valores podem ser os comprimentos dos lados de um tri�ngulo. Para que X, Y e Z formem um tri�ngulo 
� necess�rio que a seguinte propriedade seja satisfeita: o comprimento de cada lado de um tri�ngulo 
� menor do que a soma do comprimento dos outros dois lados. A fun��o deve tornar 0 para indicar que 
os valores n�o formam um tri�ngulo ou 1 para informar que formam um tri�ngulo. Para que a corre��o 
autom�tica funcione, siga as instru��es abaixo:

################## Entrada ####################

printf("Digite tr�s valores, um em cada linha.\n");

##############################################

##################### Sa�da ###################

printf("Estes valores formam um tri�ngulo.");

ou

printf("Estes valores n�o formam um tri�ngulo.");

##############################################*/

#include<stdio.h>

int condicao_triangulo(float n1, float n2, float n3){
	int resp;
	if(n1 < n2+n3 && n2 < n1+n3 && n3 < n1+n2){
		resp = 1;
	} else {
		resp = 0;
	}
	return resp;
}

int main(){
	float v1, v2, v3;
	int ret;
	printf("Digite três valores, um em cada linha.\n");
	scanf("%f %f %f", &v1, &v2, &v3);
	ret = condicao_triangulo(v1, v2, v3);
	if(ret == 1){
		printf("Estes valores formam um triângulo.");
	} else if (ret == 0){
		printf("Estes valores não formam um triângulo.");
	}
	return 0;
}
