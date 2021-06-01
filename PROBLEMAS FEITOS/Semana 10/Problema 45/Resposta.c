/*Fa�a uma fun��o que calcule as ra�zes de uma equa��o do segundo grau utilizando f�rmula de Bhaskara.

Observe que a equa��o determina dois resultados (+/-), dado a impossibilidade (com o que sabemos at� o 
momento sobre a linguagem C) de retornar dois valores em uma fun��o, retorne apenas a ra�za positiva. 
Fa�a a leitura e a exibi��o do resultado na fun��o principal (main()). . Para que a corre��o autom�tica funcione, siga as instru��es abaixo:

################## Entrada ####################

printf("Digite os valores de a, b e c, um em cada linha.\n");

##############################################

##################### Sa�da ###################

printf("A ra�z positiva � %f ", ret);

##############################################

Aten��o: Para realizar a ra�z quadrada utilize a fun��o sqrt(), veja o seu cabe�alho:

float sqrt(float v);

Ainda, para conseguir compilar utilizando sqrt(), � necess�rio utilizar o include math.h, assim, adicione a seguinte linha no come�o do programa:

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
	printf("A raíz positiva é %f ", ret);
}
