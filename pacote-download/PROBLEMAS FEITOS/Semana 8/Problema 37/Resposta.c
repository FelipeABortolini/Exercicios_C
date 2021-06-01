/*Fa�a um programa em C que obtenha do usu�rio uma matriz quadrada de nxn com valores inteiros. Ap�s obter o tamanho da matriz e os dados, apresente:

- os elementos da diagonal principal da matriz;

- os elementos da diagonal secund�ria da matriz;

Para que a corre��o automatizada funcione, use a formata��o das mensagens abaixo:

// para ler o tamanho da matriz

printf("Informe o valor de n:\n");

// antes de ler os valores da matriz

printf("Informe os valores para a matriz (1 em cada linha):\n");

# sa�da esperada - ignore esta linha - substituir <valor> pelo resultado a ser apresentado #

Elementos da diagonal principal: <valor1, valor2, ..., valorn>

Elementos da diagonal secundaria: <valor1, valor2, ..., valorn>*/

#include<stdio.h>
int main(){
	int n;
	printf("Informe o valor de n:\n");
	scanf("%d", &n);
	int m[n][n], i, j;
	printf("Informe os valores para a matriz (1 em cada linha):\n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			scanf("%d", &m[i][j]);
		}
	}
	int diag_prin[n];
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(i == j){
				diag_prin[i] = m[i][j];
			}
		}
	}
	int diag_sec[n], a = 0, b = n-1;
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
		    if((a==i)&&(b==j)){
				diag_sec[a] = m[i][j];
				a += 1;
				b -= 1;	
			}
		}
	}
	printf("Elementos da diagonal principal: ");
	for(i=0; i<n; i++){
		if(i == n-1){
			printf("%d\n", diag_prin[i]);
		} else {
			printf("%d, ", diag_prin[i]);
		}
	}
	printf("Elementos da diagonal secundaria: ");
	for(i=0; i<n; i++){
		if(i == n-1){
			printf("%d", diag_sec[i]);
		} else {
			printf("%d, ", diag_sec[i]);
		}
	}
}
