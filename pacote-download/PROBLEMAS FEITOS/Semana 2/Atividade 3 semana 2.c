/*Escreva o algoritmo informal, o fluxograma, o teste de mesa, e um programa que calcule a m�dia de tr�s notas 
informadas pelo usu�rio e mostre na tela. Use o // (coment�rio) para escrever o Algoritmo formal e o teste de 
mesa dentro do pr�prio programa que voc� escrever. O fluxograma voc� dever� desenhar (no seu editor preferido) 
e inserir como um arquivo PNG, GIF, JPG ou PDF.

 Algoritmo Informal

1�) receber a primeira nota;

2�) receber a segunda nota;

3�) receber a terceira nota;

4�) somar as três notas e dividir por três;

5�) mostrar o resultado na tela.


Teste de Mesa

  n1  |  n2  |  n3  |  M
  7.4 |      |      |
      |  8.5 |      |
      |      |  8.1 |
      |      |      | 8.0

Programa em C:*/

#include <stdio.h>

int main(){
    float n1, n2, n3, M;
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    M = (n1 + n2 + n3)/3;
    printf("%.1f", M);
}
