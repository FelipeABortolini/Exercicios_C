/*Faça uma função que calcule as raízes de uma equação do segundo grau utilizando fórmula de Bhaskara.

Observe que a equação determina dois resultados (+/-), dado a impossibilidade (com o que sabemos até o 
momento sobre a linguagem C) de retornar dois valores em uma função, retorne apenas a raíza positiva. 
Faça a leitura e a exibição do resultado na função principal (main()). . Para que a correção automática funcione, siga as instruções abaixo:

################## Entrada ####################

printf("Digite os valores de a, b e c, um em cada linha.\n");

##############################################

##################### Saída ###################

printf("A raíz positiva é %f ", ret);

##############################################

Atenção: Para realizar a raíz quadrada utilize a função sqrt(), veja o seu cabeçalho:

float sqrt(float v);

Ainda, para conseguir compilar utilizando sqrt(), é necessário utilizar o include math.h, assim, adicione a seguinte linha no começo do programa:

#include<math.h>*/

#include<stdio.h>
#include<math.h>

float Bhaskara(float a, float b, float c){
	float raiz;
	raiz = (-b + sqrt(pow(b,2) - 4*a*c))/2*a;
	return raiz;
}

int main(){
	float n1, n2, n3, ret;
	printf("Digite os valores de a, b e c, um em cada linha.\n");
	scanf("%f %f %f", &n1, &n2, &n3);
	ret = Bhaskara(n1, n2, n3);
	printf("A raÃ­z positiva Ã© %f ", ret);
}
