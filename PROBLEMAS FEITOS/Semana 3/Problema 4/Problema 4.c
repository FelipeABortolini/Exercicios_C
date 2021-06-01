/*Problema 4: Receber números e escrever na tela até que se digite o número 4890.
Envie o arquivo de programa em .C e o arquivo de imagem com o fluxograma. O algoritmo 
e o teste de mesa podem ir como comentários no próprio arquivo de programa .C, como realizado no LVP anterior.

 Algoritmo Informal:
 
 1°) Receber um número real "n";
 2°) Mostrar o número recebido na tela;
 3°) Se o número recebido não for igual a 4890, repetir os passos 1 e 2. 


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


 Código em C:*/

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

