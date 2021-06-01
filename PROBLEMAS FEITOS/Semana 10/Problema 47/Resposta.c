/*Faça uma função em linguagem C que recebe 3 valores reais X, Y e Z e que verifique se esses 
valores podem ser os comprimentos dos lados de um triângulo. Para que X, Y e Z formem um triângulo 
é necessário que a seguinte propriedade seja satisfeita: o comprimento de cada lado de um triângulo 
é menor do que a soma do comprimento dos outros dois lados. A função deve tornar 0 para indicar que 
os valores não formam um triângulo ou 1 para informar que formam um triângulo. Para que a correção 
automática funcione, siga as instruções abaixo:

################## Entrada ####################

printf("Digite três valores, um em cada linha.\n");

##############################################

##################### Saída ###################

printf("Estes valores formam um triângulo.");

ou

printf("Estes valores não formam um triângulo.");

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
	printf("Digite trÃªs valores, um em cada linha.\n");
	scanf("%f %f %f", &v1, &v2, &v3);
	ret = condicao_triangulo(v1, v2, v3);
	if(ret == 1){
		printf("Estes valores formam um triÃ¢ngulo.");
	} else if (ret == 0){
		printf("Estes valores nÃ£o formam um triÃ¢ngulo.");
	}
	return 0;
}
