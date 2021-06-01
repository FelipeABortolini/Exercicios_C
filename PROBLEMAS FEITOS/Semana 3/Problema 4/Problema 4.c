/*Problema 4: Receber n�meros e escrever na tela at� que se digite o n�mero 4890.
Envie o arquivo de programa em .C e o arquivo de imagem com o fluxograma. O algoritmo 
e o teste de mesa podem ir como coment�rios no pr�prio arquivo de programa .C, como realizado no LVP anterior.

 Algoritmo Informal:
 
 1�) Receber um n�mero real "n";
 2�) Mostrar o n�mero recebido na tela;
 3�) Se o n�mero recebido n�o for igual a 4890, repetir os passos 1 e 2. 


 Teste de Mesa: 

      n      |      n     |
  <-  8      |            |
             |      8*    |
  <- 250.5   |            |
             |    250.5*  |
  <- 2426    |            |
             |    2426*   |
  <- 4890    |            |
             |    4890*   |


 C�digo em C:*/

#include <stdio.h>
int main(){
	float n;
	voltar_aqui:
	scanf("%f", &n);
	printf("%g\n", n);
	if (n != 4890){
		goto voltar_aqui;
	}
}  

